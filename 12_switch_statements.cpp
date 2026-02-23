// Prompt: Demonstrate the use of switch statements in C++ by categorizing a student's grade into letter grades A, B, C, D, or F.

#include <iostream>

int main() {

    char grade;

    std::cout << "Enter your grade (A, B, C, D, F): ";
    std::cin >> grade;

    switch (grade) {
        case 'A':
            std::cout << "Excellent!" << std::endl;
            break;
        case 'B':
            std::cout << "Good job!" << std::endl;
            break;
        case 'C':
            std::cout << "You passed." << std::endl;
            break;
        case 'D':
            std::cout << "You need to improve." << std::endl;
            break;
        case 'F':
            std::cout << "Failed. Better luck next time." << std::endl;
            break;
        default:
            std::cout << "Invalid grade entered." << std::endl;
            break;
    }

    return 0;
}

/*
    Notes:
        - This code demonstrates the use of switch statements in C++.
        - The switch statement allows for cleaner and more readable code when dealing with multiple discrete values.
        - Both uppercase and lowercase inputs are handled for each grade.
        - a default case is included to handle invalid inputs.
*/