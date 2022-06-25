#include <cctype>
#include <cstddef>
#include "strings.hpp"
#include "numerik.hpp"
#include <initializer_list>
#include <iostream>
#include <iterator>
#include <ostream>
#include <string>
#include <algorithm>
#include <cmath>

int main(int argc, char** argv) {
    // TODO teste deine Implementationen
    auto fx = [](double x){ return std::pow(x, 3) + 4 * std::pow(x, 2) - 7 * x + 12; };
    auto fderiv = [](float x){ return 3 * std::pow(x, 2) + 8 * x - 7; };
    newton(fx, fderiv, 0, 1000);
    
}
