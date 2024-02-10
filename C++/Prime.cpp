#include <iostream>
using namespace std;

void Prime(int);

int main() 
{
  int num;
  cout<<"Enter the positive Number except 1 ";
  cin>>num;
  Prime(num);
  return 0;
}

void Prime(int n){
  int flag = 0;
  for(int i=2 ; i<n ; i++){
    if(n%i == 0){
      cout<<"Number is Prime";
      flag=1;
    }
  }
  if(flag==0){
    cout<<"Number is not Prime";
  }
}