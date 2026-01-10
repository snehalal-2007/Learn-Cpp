//Prompt: 

#include <iostream>

namespace one { // this will create a namespace called 'one' and assigns x the value of 1
    int x = 1;  
}

namespace two { // this will create a namespace called 'two' and assigns x the value of 2
    int x = 2;  
}

int main(){
    
    int x = 0;
    // int x = 1; // This will cause a compilation error since x is already declared in this scope

    //using namespace one; // you can use this if you do not want the prefix one::

    std::cout << "Value of x in global scope: " << x << std::endl; // prints the value of x in the global scope
    std::cout << "Value of x in namespace one: " << one::x << std::endl; // prints the value of x in namespace one
    std::cout << "Value of x in namespace two: " << two::x << std::endl; // prints the value of x in namespace two

    return 0;
}

/*
    Notes:
        - Namespaces help organize code and prevent name conflicts.
        - You can access variables in a namespace using the scope resolution operator (::), e.g., one::x or two::x.
        - Variables declared in the same scope must have unique names. 
        - You can also write using namespace one; to avoid prefixing with the namespace name.
*/