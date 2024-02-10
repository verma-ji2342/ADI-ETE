#include <iostream>
#include <cmath>
using namespace std;

int cube(int num){
  return num*num*num;
}

int main() 
{
  int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<cube(n);
    return 0;
} 