#include <iostream>
#include <cstring>
using namespace std;

class student {
  int age;
  char *name;
  public:
  student (int A, char *name){
    // this->name = name;  //shallow copy
    
  //for deep copy you have to make a dynamic memory for it
    this -> name = new char[strlen(name)+1];
    strcpy(this->name,name);                    //Deep copy
    this->age = A;
  }
  void display(){
    cout<<"name of Student is: "<<name<<endl;
    cout<<"Age of Student is: "<<age<<endl;
  }
};

int main() 
{
  char st[20];
  cin.getline(st,20);
  student S1(20,st);
  S1.display();
  cin.getline(st,20);
  student S2(19,st);
  S2.display();
  S1.display();
  return 0;
}