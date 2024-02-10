#include <iostream>
using namespace std;

class decimalNumber
{     
  protected:
  int i=1,j=n,n,  binaryn=0;
  
  public:
  decimalNumber()
  {
    cout<<"Enter  Decimal  Number :";
    cin>>n;
    cout<< n << endl;
    for(j=n;j>0;j=j/2)
    {
      binaryn=binaryn+(n%2)*i;
      i=i*10;
      n=n/2;
    }
  }
  friend int show(decimalNumber);
  
};
int show(decimalNumber A)
{
  cout<<"Binary number ="<<A.binaryn<<endl;
}

int main()
{ 
  decimalNumber A;
  show(A);
}