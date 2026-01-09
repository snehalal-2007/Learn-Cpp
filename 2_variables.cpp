// Prompt: Declare, Assign and Print Different Types of Variables in C++

#include <iostream>

int main(){
    
    // Declaring different types of variables

    int num; // integer variable
    double decimalNum; // double variable
    char character; // character variable
    std::string text; // string variable
    bool flag; // boolean variable

    // Assigning values to variables

    num = 10;
    decimalNum = 5.5;
    character = 'A';
    text = "Hello, C++!";
    flag = true;
    
    // Printing variable values to the console

    std::cout << "Integer: " << num << std::endl;
    std::cout << "Double: " << decimalNum << std::endl;
    std::cout << "Character: " << character << std::endl;
    std::cout << "String: " << text << std::endl;
    std::cout << "Boolean: " << std::boolalpha << flag << std::endl;

    return 0;
}

/*
    Notes:
        - Variables must be declared with a specific type before use.
        - Different types of variables can store different kinds of data.
*/