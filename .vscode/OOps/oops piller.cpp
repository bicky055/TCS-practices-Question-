#include "bits/stdc++.h"
using namespace std;

// what is encapsulation?
// encapsulation means wrapping data and methods into a single unit (class).
// its achieved by using access modifiers like private, protected, and public.

class Student{
  private:
    string name;
    int age;
    string rollNo;
   public:
     // constructor
     Student(string n,int a, string r){
            name = n;
            age = a;
            rollNo = r; 
     }
        // method to display student information
        void displayInfo(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Roll No: " << rollNo << endl;  
        }
        // method to set student name age and roll number
        void setName(string n, int a, string r){
            name = n;
            age = a;
            rollNo = r;
        }
        // method to get studnet name
        string getName(){
            return name ;
        }
        // method to get student age
        int getAge(){
            return age;
        }
        // method to get student roll number
        string getRollNo(){ 
            return rollNo;
        }
        // method to check if student is adult
        bool isAdult(){
            return age >= 18;
        }   
        
       



};

int main(){

  Student student1("bicky Jha", 20, "12345");
    student1.displayInfo();
 return 0;
}