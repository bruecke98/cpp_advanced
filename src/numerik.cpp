#include "numerik.hpp"
#include <cstddef>
#include <iostream>


double newton(std::function<double(double)> fx ,std::function<double(float)>  fderiv, double x0, size_t n) {
    double x_n = 0;   
    for (size_t i = 0; i < n; i++)
    {
        x_n = x0 - fx(x0)/fderiv(x0);
        x0 = x_n;
    }
    
    return x_n;
}

