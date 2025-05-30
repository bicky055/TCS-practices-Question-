#include "bits/stdc++.h"
using namespace std;    

// what is exception handling?
/* Exception handling is a mechanism in C++ that allows us
 to handle*/
// runtime errors or exceptional conditions in a controlled manner.
/*
its hepls us to catch and handle errors gracefully,
without crashing the program.
*/
// In C++, we can achieve exception handling using try, catch, and throw keywords.
// The try block contains the code that may throw an exception,
// the catch block contains the code that handles the exception,    
// and the throw keyword is used to throw an exception.
int main() {
    try {
        int a, b;
        cout << "Enter two integers: ";
        cin >> a >> b;

        if (b == 0) {
            throw runtime_error("Division by zero is not allowed.");
        }

        cout << "Result: " << a / b << endl;
    } catch (const runtime_error& e) {
        cout << "Error: " << e.what() << endl; // Handle the exception
    } catch (...) {
        cout << "An unexpected error occurred." << endl; // Catch any other exceptions
    }

    return 0;
}