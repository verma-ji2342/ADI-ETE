#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class A{
    private:
    int a;
    public:
    void fun1(){

    }
    virtual ~A(){

    }
};

class B : public A {
    private :
    int b;
    public :
    void fun2(){

    }

    ~B(){

    }
};

int main(){
    A *p = new B;
    p->fun1() ;
    // p->fun2() ;
    return 0;
}