#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class A{
    private:
    int a, b;
    int *p;

    public:

    A(){
         a = 1 ;
         b = 2 ;
         p = new int ;
    }

    A(int x, int y, int z){  // dynamic memories allocate to the data members, this concept called as dynamic Constructor.
        a = x ;
        b = y ;
        p = new int ;
        *p = z;
    }
    

    void show(){
        cout<<"a = "<<a<<"\nb = "<<b<<"\np = "<<*p<<endl;
    }
};

int main(){
    A obj1 , obj2(1,2,3);
    obj1.show();  // random value assign in p .
    obj2.show();
    return 0;
}