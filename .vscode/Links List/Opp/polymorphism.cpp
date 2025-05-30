#include "bits/stdc++.h"
using namespace std;    

// what is polymorphism?
/* Polymorphism is a concept in OOP that allows us to perform a
 single action in different ways.*/
// polymorphism is derived from the Greek words "poly" meaning many and
// "morph" meaning forms.
// In C++, we can achieve polymorphism using function overloading, 
//operator overloading, and virtual functions.

 class Base {
    //function overloding
    public:
    void sum(int a, int b) {
        cout << "Sum of two integers: " << a + b << endl;
    }
    void sum(double a, double b) {
        cout << "Sum of two doubles: " << a + b << endl;
    }
 };

 int main(){
    Base obj;
    obj.sum(5, 10); // Calls the first sum function
    obj.sum(5.5, 10.5); // Calls the second sum function

    // Operator overloading
    // Overloading the + operator for a custom class
    class Complex {
        public:
        int real, imag;
        Complex(int r, int i) : real(r), imag(i) {}
        
        Complex operator+(const Complex& other) {
            return Complex(real + other.real, imag + other.imag);
        }
        
        void display() {
            cout << "Complex number: " << real << " + " << imag << "i" << endl;
        }
    };

    Complex c1(3, 4), c2(1, 2);
    Complex c3 = c1 + c2; // Uses overloaded + operator
    c3.display();

    return 0;
 }
