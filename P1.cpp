// Program 1: Basic Data Types
// Scenario: Store student roll number, grade, and fee amount.

#include <iostream>      // Header file for input and output operations
                         /* include - directive used to include header files 
                           <iostream> - header file for input and output operations
                           < > - opening and closing angle brackets for including header files */

using namespace std;     /*using - allows us to use names in the std namespace without prefixing them with std::
                         namespace - a declarative region that provides a scope to the identifiers (names of types, functions, variables, etc) inside it
                         std - standard namespace that contains all the classes, objects, and functions of the C++ Standard Library
                         ; - semicolon used to terminate statements in C++
                        */
int main() {  // Main function - entry point of the program , () - parentheses used to define the parameter list of a function, { - opening brace used to define the start of a block of code

    // Declare and initialize variables of different data types
    int roll = 101;          // int stores whole numbers  , roll - variable name, 101 - initial value assigned to the variable , ; - semicolon used to terminate statements in C++
    char grade = 'A';        // char stores a single character , grade - variable name, 'A' - initial value assigned to the variable , ; - semicolon used to terminate statements in C++
    float fee = 12500.50;    // float stores decimal numbers , fee - variable name, 12500.50 - initial value assigned to the variable , ; - semicolon used to terminate statements in C++

    // Display the student details
    cout << "Roll No: " << roll << endl; /* cout - standard output stream used to display output on the console
                                         , << - insertion operator used to send data to the output stream 
                                          "Roll No: " - string literal to be displayed ,
                                           roll - variable whose value will be displayed , 
                                           endl - manipulator used to insert a newline character and flush the output buffer */
    cout << "Grade: " << grade << endl;
    cout << "Fee: " << fee << endl;

    return 0;   // Indicates that the program ended successfully
                // return - keyword used to return a value from a function
                // 0 - value returned to the operating system indicating successful execution
                // ; - semicolon used to terminate statements in C++
} // Closing brace used to define the end of a block of code

