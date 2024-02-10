#include <iostream>
using namespace std;

void EvenOdd(int);

int main() 
{
  int num;
  cout<<"Enter the number:";
  cin>>num;
  EvenOdd(num);
}

void EvenOdd(int n){
  if(n%2 == 0){
    cout<<"Number is Even";
  }
  else{
    cout<<"Number is Odd";
  }
}