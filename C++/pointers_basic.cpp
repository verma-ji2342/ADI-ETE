#include <iostream>
using namespace std;

int main() 
{
  int *i;
  int x = 5;
  cout<<"address of x is "<<&x<<endl;
  i = &x;
  cout<<"address of x is "<<i<<endl;
  cout<<"value of x is "<<*i<<endl;
  int *y = &x;
  cout<<"value of x is "<<*y<<endl;
  int **z;
  z = &i;
  cout<<"address of i is "<<z<<endl;
  cout<<"vaue of x is "<<**z<<endl;
  int ***a;
  a = &z;
  cout<<"address of a "<<a<<endl;
  cout<<"value of z is "<<*a<<endl;
  cout<<"value of i is "<<**a<<endl;
  cout<<"value of x is "<<***a<<endl;
  return 0;
}