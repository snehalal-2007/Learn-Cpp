// Prompt: Demonstrate implicit and explicit type conversion between different data types (int, float, double, char).

#include <iostream>

int main() {

    int a = 3.14; // implicit conversion from double to int
    double b = (int) 3.14; // explicit conversion from double to int

    std::cout << "Value of a (after implicit conversion): " << a << std::endl;
    std::cout << "Value of b (after explicit conversion): " << b << std::endl;

    char c = 65; // implicit conversion from int to char // 65 is ASCII value of 'A'

    std::cout << "Value of c (after implicit conversion): " << c << std::endl;

    return 0;
}

/*
    Notes:
        - Implement type conversion is automatic
        - Explicit type conversion is preciding value with new data type (int, float, double, char) x = (data type) value
*/