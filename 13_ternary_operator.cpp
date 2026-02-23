//Prompt: Use conditional (ternary) operator to determine if a number is even or odd.

#include <iostream>

int main() {

    int number;

    std::cout << "Enter a number: "; // asks for input number
    std::cin >> number;

    std::string result = (number % 2 == 0) ? "Even" : "Odd"; // uses ternary operator to check if number is even or odd
    std::cout << "The number is " << result << "." << std::endl; // prints result

    return 0;
}

/*  
    Notes:
        - This code demonstrates the use of the conditional (ternary) operator in C++.
        - The ternary operator is a concise way to perform a simple if-else check.
        - It evaluates the condition (number % 2 == 0) and returns "Even" if true, or "Odd" if false.
        - The result is stored in a string variable and printed to the console.
*/