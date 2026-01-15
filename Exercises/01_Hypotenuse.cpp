// Prompt: Initialize 2 sides of a triangle and calculate the hypotenuse using the Pythagorean theorem.

#include <iostream>
#include <cmath> // For sqrt and pow functions

int main (){

    double a;
    double b;
    double c;

    // Initialize sides a and b
    std::cout << "Enter length of side a: ";
    std::cin >> a;
    std::cout << "Enter length of side b: ";
    std::cin >> b;

    // Calculate hypotenuse c using Pythagorean theorem
    c = std::sqrt(std::pow(a, 2) + std::pow(b, 2));

    // Output the result
    std::cout << "The length of the hypotenuse c is: " << c << std::endl;

    return 0;
}