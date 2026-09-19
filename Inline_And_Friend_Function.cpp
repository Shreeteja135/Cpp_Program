// Program 8: Inline and Friend Function
// Scenario: Access private data using inline getter and friend function.

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

class Test { // class - keyword used to create a class, Test - class name, { - opening brace for the class body
private: // private - access specifier that restricts access to class members, : - colon used to mark the access section
    int value; // int - integer data type, value - variable name, ; - semicolon used to terminate the statement

public: // public - access specifier that allows access from outside the class, : - colon used to mark the access section
    Test(int v) { // Test(int v) - constructor with one parameter named v, () - parentheses used for parameters, { - opening brace for the function body
        value = v; // value - private member variable, = - assignment operator used to assign the value of v, ; - semicolon used to terminate the statement
    } // } - closing brace used to define the end of the constructor function

    inline int getValue() { // inline - keyword that suggests compiler optimization by expanding the function inline, int - return type, getValue - function name, () - parentheses used for parameters, { - opening brace for the function body
        return value; // return - keyword used to return a value from the function, value - private member variable, ; - semicolon used to terminate the statement
    } // } - closing brace used to define the end of the getValue function

    friend void show(Test t); // friend - keyword used to allow a non-member function to access private members, void - function does not return a value, show - friend function name, (Test t) - parameter of type Test, ; - semicolon used to end the declaration
}; // ; - semicolon used after the class definition

void show(Test t) { // void - function does not return a value, show - function name, (Test t) - parameter passed by value, { - opening brace for the function body
    cout << t.value; /* cout - standard output stream used to display output on the console
                      << - insertion operator used to send data to the output stream
                       t.value - private member value of object t
                       ; - semicolon used to terminate the statement */
} // } - closing brace used to define the end of the show function

int main() { // int - return type of the function, main - special function where execution begins, () - parentheses used for parameters, { - opening brace for the function body

    Test obj(50); // Test - class name, obj - object name, (50) - constructor call with value 50, ; - semicolon used to terminate the statement
    cout << obj.getValue() << endl; /* cout - standard output stream used to display output on the console
                                     << - insertion operator used to send data to the output stream
                                      obj.getValue() - calls the inline function to get the value
                                      << - insertion operator again used to send endl to output
                                      endl - manipulator used to insert a newline and flush the output buffer
                                      ; - semicolon used to terminate the statement */
    show(obj); // show - friend function called with object obj, () - parentheses used for function call, ; - semicolon used to terminate the statement

    return 0; // return - keyword used to return a value from the function
              // 0 - value returned to the operating system to indicate successful execution
              // ; - semicolon used to terminate statements in C++
} // } - closing brace used to define the end of the main function
