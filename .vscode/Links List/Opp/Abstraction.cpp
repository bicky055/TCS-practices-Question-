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