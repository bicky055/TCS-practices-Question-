#include <iostream>
using namespace std;

class Person{
  private:
  string name;
  int age;

  public:
  void setName(string n){
    name = n;
  }
  string getName(){
    return name;
  }
  void setAge(int a){
    if(a>=0) age = a;
  }
  int getAge(){
    return age;
  }
 
  // Constructor
  Person(string n, int a){
    name = n;
    age = a;
    cout << "Hello" <<endl;
  }

};

int main(){
  Person p("bik",50);
  p.setName("Bicky");
  p.setAge(25);
 cout << p.getName() << p.getAge() << endl;
 //cout << p.name << p.age << endl;
    return 0;
}