//Prompt: Store the Value of Pi and Days in a Week as Constants and Print Them in C++

#include <iostream>

int main() {

    const double PI = 3.14159; // Constant for Pi
    const int DAYS_IN_WEEK = 7; // Constant for number of days in a week

   // PI = 2.5; // This line will cause a compilation error because PI is a constant

    std::cout << "Value of PI: " << PI << std::endl;
    std::cout << "Days in a week: " << DAYS_IN_WEEK << std::endl;

    return 0;
}

/*
    Notes:
        - Constants are declared using the 'const' keyword.
        - Once assigned, the value of a constant cannot be changed.
        - Constants help improve code readability and maintainability.
*/