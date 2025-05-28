#include <iostream>
using namespace std;

class person{
    public:
    string name;
    int age;
    //create constructor
    person(string n,int a){
        name = n;
        age = a;
        cout << "Hello I'm Constructor";
    }
};

int main(){
   
 // create Object
 person p("Bicky",25);
 

 cout << p.name << " "<< p.age << endl;

 return 0;
}

