#include <iostream>
using namespace std;

int main() 
{
  int N, fact = 1, i=1;
  cin>>N;
  if(N==0){
    cout<<1;
  }
  else {
    for(i=N;i>=1;i--){
    fact *= i;
    }
      cout<<fact;
  }
  return 0;
}