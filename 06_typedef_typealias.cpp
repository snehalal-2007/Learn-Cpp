// Prompt: Create a typedef for a String type and use it in a simple program.

#include <iostream>
#include <vector>

typedef std::string text_t;

// using text_t = std::string; // alternative way using type alias

int main(){

    text_t f_name = "John";
    text_t l_name = "Doe";

    std::cout << "First Name: " << f_name << std::endl;
    std::cout << "Last Name: " << l_name << std::endl;

    return 0;
}

/*
    Notes:
        - typedef is used to create an alias (another name) for a data type, making code easier to read and maintain.
        - In this example, text_t is an alias for a string.
        - You can now use text_t in your code instead of writing out the full type.
        - type def is useful for complex data types or when you want to give a more meaningful name to a type.
        - The alternative way using 'using' keyword is more modern and often preferred.
*/