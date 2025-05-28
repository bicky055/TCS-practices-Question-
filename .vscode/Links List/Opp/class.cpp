#include "bits/stdc++.h"
using namespace std;

class student{
    public:
    string name;
    int age;
    int roll;
    // Constructor
    student(string n, int a, int r){
        name = n;
        age = a;
        roll = r;
    }
    // Function to display student details
    void display(){
        cout << "Name: " << name << ", Age: " << age << ", Roll: " << roll << endl;
    }

};

// Main function to demonstrate the student class
class student1 : public student {
     public:
    student1(string n, int a, int r) : student(n, a, r) {}
    void display() {
        cout << "Student Details: " << endl;
        student::display(); // Call the base class display function
    }
    // Destructor
    ~student1() {
        cout << "Destructor called for student1" << endl;
    }
    // Destructor for student class
      
};
class bankdetails{
   private:
   string name;
   int accountNumber;
    double balance;

    public:
    // Constructor to initialize bank details
    bankdetails(string n, int accNum, double bal) {
        name = n;
        accountNumber = accNum;
        balance = bal;
    }
    // Function to display bank details
    void display() {
        cout << "Bank Details: " << endl;
        cout << "Name: " << name << ", Account Number: " << accountNumber << ", Balance: $" << balance << endl;
    }
    void virtual display() = 0; // Pure virtual function to make this class abstract
};
class bankdetails1 : public bankdetails {
    public:
    bankdetails1(string n, int accNum, double bal) : bankdetails(n, accNum, bal) {}
    void display() {
        cout << "Bank Details: " << endl;
        bankdetails::display(); // Call the base class display function
    }
    // Destructor
    ~bankdetails1() {
        cout << "Destructor called for bankdetails1" << endl;
    }
};    
int main(){
    
    // Creating an object of the student class
    student s1("Bicky jha",25, 5);
    // Displaying the details of student s1
    s1.display();

    // Creating another object of the student class
    student s2("Rohit Kumar", 22, 10);
    // Displaying the details of student s2
    s2.display();
    // Creating an object of the student1 class
    student1 s3("Amit Singh", 20, 15);
    // Displaying the details of student s3
    s3.display();
    return 0;
}