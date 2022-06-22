#include <catch2/catch_test_macros.hpp>

#include "strings.hpp"

TEST_CASE("strings") {
    REQUIRE(countAbc("") == 0);
    REQUIRE(countAbc("@") == 0);
    REQUIRE(countAbc("A") == 1);
    REQUIRE(countAbc("Z") == 1);
    REQUIRE(countAbc("[") == 0);
    REQUIRE(countAbc("`") == 0);
    REQUIRE(countAbc("a") == 1);
    REQUIRE(countAbc("z") == 1);
    REQUIRE(countAbc("{") == 0);
    REQUIRE(countAbc("abcdefghijklmnopqrstuvwxyz") == 26);
    REQUIRE(countAbc("ABCDEFGHIJKLMNOPQRSTUVWXYZ") == 26);
    
    std::map<char, size_t> Map = {};
    REQUIRE(countIndividual("") == Map);
    Map = {{'a', 2}, {'b', 2}, {'c', 1}};
    REQUIRE(countIndividual("aabbc") == Map);

    std::list<char> list = {};
    REQUIRE(usedSymbols("") == list);
    list = {'a', 'b', 'c'};
    REQUIRE(usedSymbols("aabbc") == list);

    SymbolCounter sc({'a', 'A', '$'});
    std::string str = "ABb1a$";
    REQUIRE(std::count_if(str.begin(), str.end(), sc) == 3);
    std::string str2 = "aloAp$pzu$ikjhaghA6A7&9$69a";
    REQUIRE(std::count_if(str2.begin(), str2.end(), sc) == 9);
    std::string str3 = "pol97jbnvjdfg";
    REQUIRE(std::count_if(str3.begin(), str3.end(), sc) == 0);

}

