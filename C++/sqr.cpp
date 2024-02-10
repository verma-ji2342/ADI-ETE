#include <iostream>
#include <cmath>
using namespace std;

int sqr(int num){
  return num*num;
}

int main() 
{
  int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<sqr(n);
    return 0;
}