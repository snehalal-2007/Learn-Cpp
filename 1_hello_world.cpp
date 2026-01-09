// Prompt: Write a simple "Hello, World!" program.

#include <iostream> // standard C++ library that lets your program read input and print output

int main(){ // mainfunction - execution starts here

    std::cout << "Hello, World!" << std::endl; // prints 'Hello, World!' to the console
    std::cout << "Welcome to C++ programming."; //prints 'Welcome to C++ programming.' to the console
    
    return 0; // indicate that the program ended successfully (if the program returns 1 it means there was an error)
}

/* 
    Notes:
        - main() is the main function where the program execution begins.
        - returns 0 indicates successful completion of the program.
        - std::cout is used to output (print) text to the console. cout stands for "character output".
        - std::endl is used to insert a new line and flush the output buffer. It works like \n or enter key.
*/