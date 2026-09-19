// Concept 1: Basic Single Inheritance
// Aim: To implement single inheritance using Person as the base class and Student as the derived class.

#include <iostream>      // Header file for input and output operations
                         /* include - directive used to include header files
                           <iostream> - header file for input and output operations
                           < > - opening and closing angle brackets for including header files
                           ; - semicolon used to terminate statements in C++ */

#include <string>       // Header file for string support
#include <utility>       // Header file for std::move

class Person {          // class - keyword used to define a class named Person
protected:              // protected - access specifier so members are accessible in derived classes
    std::string name;   // std::string - standard string type, name - variable to store the person's name

public:                 // public - access specifier so members are accessible outside the class
    explicit Person(std::string personName) : name(std::move(personName)) {} // explicit - prevents accidental conversions
                                                                             // Person - constructor name
                                                                             // std::string - parameter type
                                                                             // personName - parameter name
                                                                             // : - initializer list
                                                                             // name - member variable
                                                                             // std::move - moves string data into name
                                                                             // {} - empty body of constructor

    void displayName() const { // void - no return value
                              // displayName - function name
                              // const - function cannot change object data
                              // { - opening brace for the function body
        std::cout << "Name: " << name << '\n'; // std::cout - output stream
                                               // << - insertion operator
                                               // "Name: " - text to display
                                               // name - variable value to display
                                               // '\n' - newline escape sequence
                                               // ; - semicolon used to end the statement
    } // } - closing brace used to end the function body
}; // ; - semicolon used after the class definition

class Student : public Person { // class - keyword used to define a class named Student
                               // : - inheritance symbol
                               // public - inheritance mode
                               // Person - base class
private:                       // private - members are accessible only inside this class
    int rollNumber;            // int - integer data type
                              // rollNumber - variable to store the roll number

public:                        // public - access specifier
    Student(std::string studentName, int roll) // Student - constructor name
                                              // std::string - parameter type for studentName
                                              // int - parameter type for roll
                                              // studentName - parameter name
                                              // roll - parameter name
        : Person(std::move(studentName)), rollNumber(roll) {} // : - initializer list
                                                              // Person - call to base class constructor
                                                              // std::move - moves string value into the base class
                                                              // rollNumber - member variable initialization
                                                              // roll - value assigned to rollNumber
                                                              // {} - empty constructor body

    void displayStudent() const { // void - no return value
                                 // displayStudent - function name
                                 // const - function cannot modify object data
                                 // { - opening brace for the function body
        displayName(); // displayName - inherited member function called inside derived class
        std::cout << "Roll Number: " << rollNumber << '\n'; // std::cout - output stream
                                                            // << - insertion operator
                                                            // "Roll Number: " - text to display
                                                            // rollNumber - variable value to display
                                                            // '\n' - newline escape sequence
                                                            // ; - semicolon used to end the statement
    } // } - closing brace used to end the function body
}; // ; - semicolon used after the class definition

int main() { // int - return type of the main function
             // main - starting point of the program
             // { - opening brace for the main function body
    Student student("Shree", 101); // Student - class name
                                    // student - object name
                                    // "Shree" - string value passed to constructor
                                    // 101 - integer value passed to constructor
                                    // ; - semicolon used to end the statement
    student.displayStudent(); // student - object name
                             // . - member access operator
                             // displayStudent - function call
                             // ; - semicolon used to end the statement
    return 0; // return - keyword used to return a value from the function
              // 0 - value returned to the operating system showing successful execution
              // ; - semicolon used to end the statement
} // } - closing brace used to end the main function
