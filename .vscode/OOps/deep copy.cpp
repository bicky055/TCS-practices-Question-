#include "bits/stdc++.h"
using namespace std;    

// what is deep copy?
/* A deep copy creates a new object and recursively copies 
all the data from the original object to the new object.
 * This means that the new object has its own copy of the data, 
 and changes made to one object do not affect the other. */  
 
// Example of deep copy in C++
class student{
public:
    string name;
    int* age;

    // Constructor to initialize the student
    student(string n, int a) {
        name = n;
        age = new int(a); // Allocate memory for age
    }

    // Copy constructor for deep copy
    student(const student& s1) {
        name = s1.name; // Copy the name
        age = new int(*s1.age); // Create a new memory location and copy the value
    }

    // Destructor to free memory
    ~student() {
        delete age; // Free the memory allocated for age
    }

    // Display function to show student details
    void display() const {
        cout << "Name: " << name << ", Age: " << *age << endl;
    }
};

int main() {
    student s1("Alice", 20); // Create a student object
    student s2 = s1; // Create a deep copy of s1

    cout << "Original Student: ";
    s1.display(); // Display details of original student

    cout << "Copied Student: ";
    s2.display(); // Display details of copied student

    // Modify the copied student's age
    *s2.age = 25;

    cout << "After modifying copied student's age:" << endl;
    cout << "Original Student: ";
    s1.display(); // Original student's age remains unchanged
    cout << "Copied Student: ";
    s2.display(); // Copied student's age is modified

    return 0;
}