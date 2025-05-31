#include "bits/stdc++.h"
using namespace std;    

// what is shallow copy?
/* A shallow copy creates a new object, but instead of copying the
 actual data, it copies the references to the data. This means that both
 the original and the copied object refer to the same data in memory. */
// Example of shallow copy in C++
class ShallowCopy {
public:
    int* data; // Pointer to an integer

    // Constructor to initialize the data
    ShallowCopy(int value) {
        data = new int(value); // Allocate memory and assign value
    }

    // Copy constructor for shallow copy
    ShallowCopy(const ShallowCopy& other) {
        data = other.data; // Copy the pointer, not the actual data
    }

    // Destructor to free memory
    ~ShallowCopy() {
        delete data; // Free the memory allocated for data
    }

    // Function to display the value
    void display() const {
        cout << "Value: " << *data << endl;
    }
};

class student {
    public:
    string name;
    int* age;
    // Constructor to intialize the student
    student(string n, int a){
        name = n;
        age = new int(a); // Allocate memory for age
    }
    // copy constructor for shallow copy
    student(const student& s1){
        name = s1.name; // Copy the name
        age = s1.age; // Copy the pointer to age (shallow copy)
    }
    // display function to show student details
    void display() const{
        cout << "Name: " << name << ", Age: " << *age << endl;
    }

};

int main() {
    ShallowCopy obj1(42); // Create an object with value 42
    ShallowCopy obj2 = obj1; // Create a shallow copy of obj1

    cout << "Original Object: ";
    obj1.display(); // Display value of original object

    cout << "Shallow Copied Object: ";
    obj2.display(); // Display value of copied object

    // Modifying the data through the original object
    *obj1.data = 100;

    cout << "After modifying original object:" << endl;
    cout << "Original Object: ";
    obj1.display(); // Display modified value of original object
    cout << "Shallow Copied Object: ";
    obj2.display(); // Display value of copied object (will reflect change)



    // Demonstrating shallow copy with student class
    student s1("bicky", 25); // Create a student object
    student s2 = s1; // Create a shallow copy of student object
    cout << "Original Student: ";
    s1.display(); // Display original student details
    cout << "Shallow Copied Student: ";

    // Modifying the age through the original student object
    *s2.age = 30;
    s2.display(); // Display copied student details (will reflect change)
    cout << "After modifying age in copied student:" << endl;
    cout << "Original Student: ";
    // Note: Both s1 and s2 will reflect the change in age due to shallow copy
    
    return 0;
}