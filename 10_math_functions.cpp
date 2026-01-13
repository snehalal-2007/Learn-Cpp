// Prompt: Demonstrate the use of various mathematical functions in C++ including max, min, sqrt, pow, abs, round, ceil, and floor.

#include <iostream>
#include <cmath> // For mathematical functions

int main (){
    double x = 2.5;
    double y = -4.0;

    double max = std::max(x,y); // maximum of x and y
    double min = std::min(x,y); // minimum of x and y
    double square_root = std::sqrt(x); // square root of x
    double power = std::pow(x,y); // x raised to the power of y
    double absolute = std::abs(y); // absolute value of y
    double rounded = std::round(x); // rounds to nearest integer
    double ceiling = std::ceil(x); // rounds up to nearest integer
    double floor_value = std::floor(x); // rounds down to nearest integer

    std::cout << "Max: " << max << std::endl;
    std::cout << "Min: " << min << std::endl;
    std::cout << "Square Root of " << x << ": " << square_root << std::endl;
    std::cout << x << " raised to the power of " << y << ": " << power << std::endl;
    std::cout << "Absolute value of " << y << ": " << absolute << std::endl;
    std::cout << x << " rounded: " << rounded << std::endl;
    std::cout << x << " ceiling: " << ceiling << std::endl;
    std::cout << x << " floor: " << floor_value << std::endl;

    return 0;
}

/*
    Note:
        - This code demonstrates the use of various mathematical functions available in the C++ standard library.
        - It includes functions for finding maximum and minimum values, calculating square roots and powers,
          obtaining absolute values, and rounding numbers in different ways.
        - The <cmath> header is included to access these mathematical functions.    
*/