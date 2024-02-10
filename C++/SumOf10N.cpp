#include <iostream>
using namespace std;

int Nsum(int);

int main() 
{
  int num;
  cout<<"Enter the number to find the sum of next 10 Natural number ";
  cin>>num;
  cout<<Nsum(num);
  return 0;
}

int Nsum(int n){
  int sum = 0;
  for (int i=n ; i<n+10 ; i++){
    sum += i;
  }
  return sum;
}