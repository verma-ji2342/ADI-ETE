
//  Primitive to Class Type Conversion

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Complex {
    private:
    int a , b ;
    public :
    Complex(int k){
        a=k ;
        b=0;
    }
    Complex() {
        // default Constructor    
    }
    void setData(int x, int y){
        a=x;
        b=y;
    }
    void showData(){
        cout<<"a = "<<a<<"\nb = "<<b;
    }
};

int main(){
    Complex C1;
    int x=5 ; 
    C1 = x ; // this line call the costructor of one parameter and then assign the values according to this.
    // x = C1.Complex(x);
    C1.showData();
    return 0;
}