#include <iostream>
#include <cmath>
using namespace std;

int cuberoot(int num){
  return cbrt(num);
}

int main() 
{
  int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<cuberoot(n);
    return 0;
} 