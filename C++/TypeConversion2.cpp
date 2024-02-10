
// Class to Primitive Type Conversion

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

    // Syntax for Type Conversion

    operator int(){
        // return (a);
        // you can also return the sum and difference of two number 
        return (a+b);
    }

};

int main(){
    int x;
    Complex C1;
    C1.setData(2,5);
    x = C1;
    cout<<"x = "<<x<<endl;
    C1.showData();
    return 0;
}