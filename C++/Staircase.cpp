#include <iostream>
using namespace std;

int NoOfWays(int x){
  if(x==1 || x==0){
    return 1;
  }
  else if(x == 2){
    return 2;
  }
  else {
    return NoOfWays(x-3) + NoOfWays(x-2) + NoOfWays(x-1) ;
  }
}

int main() 
{
  int n;
  cin>>n;
  cout<<NoOfWays(n);
  return 0;
}