#include <iostream>
using namespace std;

int main() 
{
  int N, i=0, sum=0;
  cin>>N;
  do {
    sum += i;
    i++;
  } while(i<=N);
  cout<<sum;
  return 0; 
}