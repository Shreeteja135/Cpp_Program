// Program 3: Loop and Array
//Scenario: Print marks of five students.

#include <iostream>  /* # - preprocessor directive 
                        include - evoke the header file 
                        < >-  starting and ending brackets of header file 
                        iostream - header file for input/output operations */

// use to not use std:: before every standard library object                        
using namespace std; /* using - directive to use the standard namespace 
                        namespace - scope resolution operator 
                        std - standard namespace 
                        ;- termination of statement */

int main() { /*program execution start from main function*/
    int marks[5]; // array of 5 integers to store marks of students
    cout << "Enter marks of 5 students:";  // prompt user to enter marks
    for (int i = 0; i < 5; i++)   // loop to take input for marks of 5 students
    {
        cin >> marks[i];    // take input from user and store in marks array
    }

    for (int i = 0; i < 5; i++)  // loop to print marks of 5 students
    {
        cout << marks[i] << " "; // print marks of each student 
    }

    return 0; // return 0 indicates successful execution of the program
}
