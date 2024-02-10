// Initializers are the list which is used to initialize the 
// constant variable in the class as well as normal variables
// warning comment out one constructor at a time.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Dummy {
    private: 
    int a, b;
    const int x;
    int &c;
    public :
    Dummy() : x(5) // here no error will come
    {}
    // for more than one variable 
    Dummy() : x(5), a(2), b(6) // for more than one variable they are separated by commas.
    {} 

    Dummy(int &n) : x(5), c(n), b(9)  // for initializing reference variable by user.
    {}

};

int main(){
    int m=8;
    Dummy D1(m);

}