// Prompt : Write a C++ program that prompts the user to enter their age and then displays it back to them.

#include <iostream>

int main() {

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age; // Waits for user input

    std::cout << "You are " << age << " years old." << std::endl;

    return 0; 
}

/*
    Notes:
        - cout is used for outputting to the console
        - cin is used for taking input from the console
        - The '>>' operator is used with cin to read input
*/