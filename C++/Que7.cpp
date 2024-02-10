#include <iostream>
using namespace std;

bool IsPrime(int N){
  if (N ==1 || N == 0){
    return false;
  }
  for (int i=2; i<N ; i++){
    if( N%i == 0 ){
      return false;
    }
  }
  return true;
  
}
int main() 
{
  int n;
  cout<<"print first "<<n<<" prime number:";
  cin>>n;
  for(int j=1; j<=n; j++){
    if(IsPrime(j)){
      cout<<j<<endl;
  }
  }
  return 0;
}