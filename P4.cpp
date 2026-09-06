// program 4: Function
// Scenario: Add two numbers using a function.

#include <iostream>  // # - preprocessor directive 
                    // include - evoke the header file 
                    // < >-  starting and ending brackets of header file 
                    // iostream - header file for input/output operations

using namespace std; // using - directive to use the standard namespace 
                    // namespace - scope resolution operator 
                    // std - standard namespace 
                    // ;- termination of statement

int add(int, int); // function prototype for add function that takes two integers as parameters and returns an integer

int main() {    // program execution start from main function
    int a = 10, b = 20;  // declare and initialize two integer variables a and b
    cout << "Sum = " << add(a, b) << endl; // call the add function with a and b as arguments and print the result
    return 0; // return 0 indicates successful execution of the program
}// function definition for add function that takes two integers as parameters and returns their sum

int add(int x, int y) { // function definition for add function that takes two integers x and y as parameters
                        // int - return type of the function
                        // add - name of the function
                        // x, y - parameters of the function
                        // 
{
    return x + y; // return the sum of x and y
}