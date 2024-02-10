#include<iostream>
using namespace std ;

int fibonacci(int x) {
   if((x==1)||(x==0)) {
      return(x);
   }else {
      return(fibonacci(x-1)+fibonacci(x-2));
   }
}


int main(){
    int x ;
    cout<<"Enter the number : " <<endl ;
    cin>>x ;
    cout<<x<<"th term of fibonacci sequence is : "<<fibonacci(x) ;
    return 0 ;
}