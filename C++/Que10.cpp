
#include <iostream>
using namespace std;

int main() 
{
  int N;
  cin>>N;
  switch(N){
    case 0:
    cout<<"Student opted OS course";
    break ;
    case 1:
    cout<<"Student opted DBMS course";
    break;
    case 2:
    cout<<"Student opted OOPS course";
    break;
    case 3:
    cout<<"Student opted DS course";
    break;
    default :
    cout<<"Student not registered";
  }
  return 0;
}