// Program 6: Constructor and Destructor
// Scenario: Show automatic object initialization and cleanup.

#include <iostream>      // Header file for input and output operations
                         /* include - directive used to include header files
                           <iostream> - header file for input and output operations
                           < > - opening and closing angle brackets for including header files
                           ; - semicolon used to terminate statements in C++
                          */

using namespace std;     /* using - allows us to use names in the std namespace without prefixing them with std::
                         namespace - a declarative region that provides a scope to the identifiers inside it
                         std - standard namespace that contains the C++ Standard Library
                         ; - semicolon used to terminate statements in C++
                        */

class Demo { // class - keyword used to create a class, Demo - class name, { - opening brace for the class body
public: // public - access specifier that allows access from outside the class, : - colon used to mark the access section

    Demo() { // Demo() - constructor of the class, () - parentheses used for function parameters, { - opening brace for the function body
        cout << "Constructor called\n"; /* cout - standard output stream used to display output on the console
                                         << - insertion operator used to send data to the output stream
                                          "Constructor called\n" - string literal to be displayed
                                          \n - newline escape sequence used to move to the next line
                                          ; - semicolon used to terminate statements in C++ */
    } // } - closing brace used to define the end of the constructor function

    ~Demo() { // ~Demo() - destructor of the class, destructor runs automatically when the object is destroyed
        cout << "Destructor called\n"; /* cout - standard output stream used to display output on the console
                                        << - insertion operator used to send data to the output stream
                                         "Destructor called\n" - string literal to be displayed
                                         \n - newline escape sequence used to move to the next line
                                         ; - semicolon used to terminate statements in C++ */
    } // } - closing brace used to define the end of the destructor function
}; // ; - semicolon used after the class definition

int main() { // int - return type of the function, main - special function where execution begins, () - parentheses used for parameters, { - opening brace for the function body

    Demo d; // Demo - class name, d - object of the Demo class, ; - semicolon used to terminate statements in C++

    return 0; // return - keyword used to return a value from the function
              // 0 - value returned to the operating system to indicate successful execution
              // ; - semicolon used to terminate statements in C++
} // } - closing brace used to define the end of the main function

