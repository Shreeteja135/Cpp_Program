// Concept 10: Function Overriding
// Aim: To override a virtual member function in a derived class.

#include <iostream> // Header file for input and output operations

class Vehicle { // class - keyword to define a base class named Vehicle
public: // public - access specifier
    virtual void move() const { // virtual - allows dynamic binding
                               // void - function returns no value
                               // move - function name
                               // const - function cannot modify object data
                               // { - opening brace for the function body
        std::cout << "Vehicle is moving\n"; // std::cout - output stream
                                            // << - insertion operator
                                            // "Vehicle is moving\n" - message to display
                                            // ; - semicolon used to end the statement
    } // } - closing brace used to end the function body

    virtual ~Vehicle() = default; // virtual - allows destructor to work correctly in polymorphic classes
                                 // ~Vehicle - destructor name
                                 // = default - use compiler-generated default definition
                                 // ; - semicolon used to end the statement
}; // ; - semicolon after class definition

class Car : public Vehicle { // class - keyword to define a derived class named Car
                            // : - inheritance symbol
                            // public - inheritance mode
                            // Vehicle - base class
public: // public - access specifier
    void move() const override { // void - no return value
                                // move - function name
                                // const - function cannot modify object data
                                // override - ensures this function overrides a virtual base function
                                // { - opening brace for the function body
        std::cout << "Car moves on roads\n"; // std::cout - output stream
                                              // << - insertion operator
                                              // "Car moves on roads\n" - message to display
                                              // ; - semicolon used to end the statement
    } // } - closing brace used to end the function body
}; // ; - semicolon after class definition

class Boat : public Vehicle { // class - keyword to define a derived class named Boat
                             // : - inheritance symbol
                             // public - inheritance mode
                             // Vehicle - base class
public: // public - access specifier
    void move() const override { // void - no return value
                                // move - function name
                                // const - function cannot modify object data
                                // override - ensures this function overrides a virtual base function
                                // { - opening brace for the function body
        std::cout << "Boat moves on water\n"; // std::cout - output stream
                                               // << - insertion operator
                                               // "Boat moves on water\n" - message to display
                                               // ; - semicolon used to end the statement
    } // } - closing brace used to end the function body
}; // ; - semicolon after class definition

int main() { // int - return type of the main function
             // main - starting point of the program
             // { - opening brace for the function body
    Car car; // Car - class name
              // car - object name
              // ; - semicolon used to end the statement
    Boat boat; // Boat - class name
                // boat - object name
                // ; - semicolon used to end the statement
    car.move(); // car - object name
                // . - member access operator
                // move - function call
                // ; - semicolon used to end the statement
    boat.move(); // boat - object name
                 // . - member access operator
                 // move - function call
                 // ; - semicolon used to end the statement
    return 0; // return - keyword used to return a value from the function
              // 0 - value returned to the operating system showing successful execution
              // ; - semicolon used to end the statement
} // } - closing brace used to end the main function
