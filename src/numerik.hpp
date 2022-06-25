#pragma once
#include <cstddef>
#include <functional>
#include <cmath>

double newton(std::function<double(double)> fx  ,std::function<double(float)> fderiv, double x0, size_t n);

template <typename T>
T newtonTemp(std::function<double(T)> fx, std::function<double(T)> fderiv, T x0, size_t n) {
    double x_n = 0;   
    for (size_t i = 0; i < n; i++)
    {
        x_n = x0 - fx(x0)/fderiv(x0);
        x0 = x_n;
    }
    
    return x_n;
}

template <typename T>
T fxTemp(T x) {
    return x * x * x + 4 * x * x - 7 * x + 12;
}

template <typename T>
T fderivTemp(T x) {
    return 3 * x * x + 8 * x - 7;
}
