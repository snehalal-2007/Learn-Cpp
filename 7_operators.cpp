// Prompt: Initialize two integer variables and perform basic arithmetic operations (addition, subtraction, multiplication, division).

#include <iostream>

int main() {

    int x = 15;
    int y = 25;

    int sum = x + y;
    int difference = y - x;
    int product = x * y;
    double division = y/x;
    int remainder = y % x;

    std::cout << "Sum of " << x << " and " << y << " is: " << sum << std::endl;
    std::cout << "Difference when " << x << " is subtracted from " << y << " is: " << difference << std::endl;
    std::cout << "Product of " << x << " and " << y << " is: " << product << std::endl;
    std::cout << "Division of " << y << " by " << x << " is: " << division << std::endl;
    std::cout << "Remainder when " << y << " is divided by " << x << " is: " << remainder << std::endl;

    // Short hand operators
    // sum+=5 is equivalent to sum = sum + 5
    // sum++ is equivalent to sum = sum + 1

    return 0;
}

/*
    Notes:
        - This program demonstrates basic arithmetic operations: addition, subtraction, multiplication, and division.
        - It also shows how to use the output stream (std::cout) to print results to the console.
        - Short hand operators can be used for more concise code when updating variable values.
*/