#include <iostream>
using namespace std;

int main() 
{
  int age;
  cin>>age;
  if(age<18){
    cout<<"minor not eligible";
  }
  else if(age>66){
    cout<<"Eligible for vaccination with highest priority";
  }
  else {
    cout<<"Eligible for vaccination with least priority";
  }
  return 0;
}
