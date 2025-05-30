#include "bits/stdc++.h"
using namespace std;

/*Abstraction is a concept in OOP that allows us to hide the complex 
implementation details and show only the essential features of an object. 
In C++, we can achieve abstraction using abstract classes and
 pure virtual functions. */
 // what is abstract class?
 // An abstract class is a class that cannot be instantiated and is meant to be
// used as a base class for other classes. 
//It contains at least one pure virtual function.
class abstractClass {
    public:
    // Pure viratual function
    virtual void display() = 0; // Pure virtual function

    // virtual fuction 
    virtual void show() {
        cout << "This is a virtual function in the abstract class." << endl;
    }

};

// what is the pure virtual function?
// A pure virtual function is a function that has no implementation 
//in the base class
// and must be implemented by any derived class.
// It is declared by assigning 0 to the function declaration.
// It is used to make a class abstract.
// A class with at least one pure virtual function is called an
// abstract class.

// what is the difference between pure virtual function and virtual function?   
// A pure virtual function is a function that has no implementation in the base class
// and must be implemented by any derived class. It is declared by assigning 0 to the function declaration.
// A virtual function is a function that has an implementation in the base class
// and can be overridden by any derived class. It is declared using the virtual keyword.    

int main(){
    // We cannot create an object of an abstract class
    // abstractClass obj; // This will give an error

    // We can create a derived class that implements the pure virtual function
    class Derived : public abstractClass {
        public:
        void display() override {
            cout << "Display function implemented in the derived class." << endl;
        }
    };

    Derived obj;
    obj.display(); // Call the implemented function
    obj.show(); // Call the virtual function from the base class

    return 0;
}
