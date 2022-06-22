#include "strings.hpp"
#include <algorithm>
#include <cctype>
#include <iterator>
#include <iostream>

#include <cwctype>


size_t countAbc(const std::string& input) {
    auto nbr = std::count_if(input.begin(), input.end(), [](char item){return isalpha(item);});
    return nbr;
}

std::map<char, size_t> countIndividual(const std::string& input) {
    std::map<char, size_t> Map;
    Map = {};
    for (size_t i = 0; i < input.length(); i++)
    {
        char c = input[i];
        if (Map.count(input[i]) == 0){
            Map[input[i]] = std::count_if(input.begin(), input.end(), [&c](char item){return item == c;});
        }
    }
    return Map; 
} 


SymbolCounter::SymbolCounter(std::initializer_list<char> lst) : lst(lst) {}

bool SymbolCounter::operator()(char c) const {
    auto nbr = std::count_if(lst.begin(), lst.end(), [&c](char item){return item == c;});
    if (nbr>0){
        return true;
    }else{
        return false;
    }
}

std::list<char> usedSymbols(const std::string& input) {
    std::list<char> list = {};
    for (char c : input){
        bool found = (std::find(list.begin(), list.end(), c) != list.end());
        if (!found){
            list.push_back(c);
        }
    }
    return list;
}
