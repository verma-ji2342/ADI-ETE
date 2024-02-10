#include <iostream>
using namespace std;

// This method take n+1 call to complete execute the function

// int power(int m, int n){  
//     if(n==0) return 1;
//     else return power(m,n-1)*m;
// }

// This method is faster than above 

int power(int m, int n){
    if(n==0) return 1;
    if(n%2 == 0) return power(m*m, n/2);
    else return m*power(m*m, (n-1)/2);
}

int main(){
    int m, n;
    cout<<"BASE : and EXPONENT : ";
    cin>>m>>n;
    cout<<power(m,n);
    return 0;
}