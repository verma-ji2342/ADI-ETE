#include <iostream>
#include <cmath>
using namespace std;

float sqroot(int num){
  float sr;
  sr = sqrt(num);
  return sr;
}

int main() 
{
  int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<sqroot(n);
    return 0;
}