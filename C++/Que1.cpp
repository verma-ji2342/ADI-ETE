#include <iostream>
using namespace std;

int main() 
{
  int N;
  cin>>N;
  if(N%3==0 || N%7==0){
    cout<<"Number is multiple of 3 or 7";
  }
  else {
    cout<<"Number is not multiple of 3 or 7";
  }
  return 0;
}