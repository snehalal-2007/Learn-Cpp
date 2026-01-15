// Prompt: Demonstrate the use of if, else if, and else statements in C++ by categorizing a person's age into minor, adult, or senior citizen.

#include <iostream>

int main() {

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age<18){
        std::cout << "You are a minor." << std::endl;
    }
    else if (age>=18 && age<65){
        std::cout << "You are an adult." << std::endl;
    }
    else{
        std::cout << "You are a senior citizen." << std::endl;
    }

    return 0;
}

/*
    Notes:
        - This code demonstrates the use of if, else if, and else statements in C++.
        - && operator is used to combine multiple conditions in the else if statement.
        - || operator can also be used for logical OR conditions if needed.
*/