#include <iostream>
using namespace std;

int main() 
{
  int N, product = 1, sum=0;
  cin>>N;
  for (int i=0 ;i<=N ; i++){
    product = i*i;
    sum += product ;
  }
  cout<<sum;
  return 0;
}