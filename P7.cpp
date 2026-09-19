// Program 7: Static Member
// Scenario: Count how many objects are created.

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

class Student { // class - keyword used to create a class, Student - class name, { - opening brace for the class body
public: // public - access specifier that allows access from outside the class, : - colon used to mark the access section

    static int count; // static - keyword that means the variable is shared by all objects, int - integer data type, count - variable name, ; - semicolon used to terminate the statement

    Student() { // Student() - constructor of the class, () - parentheses used for function parameters, { - opening brace for the function body
        count++; // count - static variable shared by all objects, ++ - increment operator used to increase the value by 1, ; - semicolon used to terminate the statement
    } // } - closing brace used to define the end of the constructor function
}; // ; - semicolon used after the class definition

int Student::count = 0; // int - integer data type, Student::count - static member variable of the class, = - assignment operator used to assign the value 0, ; - semicolon used to terminate the statement

int main() { // int - return type of the function, main - special function where execution begins, () - parentheses used for parameters, { - opening brace for the function body
    Student s1, s2, s3; // Student - class name, s1, s2, s3 - object names, , - comma used to separate variable names, ; - semicolon used to terminate the statement

    cout << Student::count; /* cout - standard output stream used to display output on the console
                             << - insertion operator used to send data to the output stream
                              Student::count - static member variable of the class
                              ; - semicolon used to terminate the statement */

    return 0; // return - keyword used to return a value from the function
              // 0 - value returned to the operating system to indicate successful execution
              // ; - semicolon used to terminate statements in C++
} // } - closing brace used to define the end of the main function
