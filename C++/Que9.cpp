#include <iostream>
using namespace std;

int main() 
{
  int N;
  cin>>N;
  if (N>=4){
    if(N<=10 && N>=9){
      cout<<"A+";
    }
    else if(N>=8 && N<=9){
      cout<<"A";
    }
    else if(N>=7 && N<=8){
      cout<<"B+";
    }
    else if(N>=6 && N<=7){
      cout<<"B";
    }
    else if(N>=5 && N<=6){
      cout<<"C";
    }
    else {
      cout<<"D";
    }
  }
  else{
    cout<<"Student failed";
  }
  return 0;
}