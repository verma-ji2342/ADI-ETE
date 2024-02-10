
#include <iostream>
using namespace std;

int main() 
{
  int a, b, c;
  cin>>a>>b>>c;
  if(a>b){
    if(a>c){
      cout<<a<<" is the largest number amoung three of them";
    }
    else {
      cout<<c<<" is the largest number amoung three of them";
    }
  }
  else {
    if(b>c){
      cout<<b<<" is the largest number amoung three of them";
    }
    else {
      cout<<c<<" is the largest number amoung three of them";
    }
  }
  return 0;
}