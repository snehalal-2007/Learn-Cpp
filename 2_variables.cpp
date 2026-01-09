// Prompt: Declare, Assign and Print Different Types of Variables in C++

#include <iostream>

int main(){
    
    // Declaring different types of variables

    int num; // whole numbers
    double decimalNum; // decimal value
    char character; // a single character
    std::string text; // multiple characters (string)
    bool flag; // true or false value

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
        - << smth << is used to print multiple items or to connect different values.
        - Different types of variables can store different kinds of data.
*/