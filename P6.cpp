//Program 5: Class and Object
//Scenario: Store student details using class and object.

#include <iostream> /* # - preprocessor directive 
                        include- evoke the header file 
                        < > - header file angular brackets 
                        iostream - input / output stream */

#include <string>  /* # - preprocessor directive 
                        include- evoke the header file 
                        < > - header file angular brackets 
                        string - string class */

using namespace std; /* using - keyword to access standard namespace 
                            namespace - scope resolution operator  - means the scope of the identifier is limited to the namespace
                            std - standard namespace 
                            ; -b terminate the statement */

class Student { /* class-  blueprint for creating objects 
                    Student - class name 
                    { - start of class body */

public:   // public access specifier - members declared under this are accessible from outside the class
    string name; // string - data type for name, name - variable to store student name, ; - terminate the statement
    int age; // int - data type for age, age - variable to store student age, ; - terminate the statement

    Student(string n = "", int a = 0) : name(n), age(a) {}
    // Constructor - special member function to initialize objects
    /* Student - name and age are initialized using member initializer list 
    ( - opening parenthesis for member initializer list 
    ) - closing parenthesis for member initializer list
     string - data type to store sequence of characters
     n - parameter to store student name
     int - data type for age
     a - parameter to store student age
    {}- to initialize the members */

    void show() const { // void - return type of the function, show - function name, const - indicates that the function does not modify any member variables of the class
        cout << name << " " << age << endl;
        // cout - standard output stream, << - insertion operator, endl - end line
    }
}; // end of class body

int main() { // int - return type of the function, main - function name, () - indicates that the function does not take any parameters
    // Create an object of Student class
    Student s1("Shree", 20);
    s1.show();// Call the show() function to display student details
    return 0; // return 0 - indicates successful execution of the program
}