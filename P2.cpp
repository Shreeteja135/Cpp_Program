//Program 2: if-else
// Scenario: Check whether a student has passed or failed.

#include <iostream> // # - preprocessor directive
                    // include - keyword to evoke the preprocessor
                    //  < > - indicates that the header file is a standard library header file
                    // iostream - header file that contains definitions for input/output stream objects
using namespace std;   /* using - keyword to specify the namespace 
                         namespace - a scope that contains identifiers 
                         std - standard namespace 
                         ; - semicolon  to terminate the statement */

int main() {    // int - keyword to declare a variable of type integer
                // main - function name that serves as the entry point of the program
                // { - opening brace to indicate the start of the function body

int marks;
cout << "Enter the marks: ";
cin >> marks;  // int - keyword to declare a variable of type integer
                // marks - variable name to store the marks
                // cin - standard input stream object
                // >> - extraction operator to read data from the input stream
                


if (marks >= 40) {   // if - keyword to start a conditional statement
                    // (marks >= 40) - condition to check if marks are greater than or equal to 40
                    // { - opening brace to indicate the start of the if block

cout << "Pass";  // cout - standard output stream object
                // << - insertion operator to send data to the output stream
                // "Pass" - string literal to be printed to the console
                // ; - semicolon to terminate the statement

}
else {  // else - keyword to specify an alternative block of code to execute if the condition is false
        // { - opening brace to indicate the start of the else block

cout << "Fail"; // cout - standard output stream object
                // << - insertion operator to send data to the output stream
                // "Fail" - string literal to be printed to the console
                // ; - semicolon to terminate the statement
}
return 0;  // return - keyword to return a value from the function
                // 0 - integer value indicating successful execution of the program
                // ; - semicolon to terminate the statement
}