#include <iostream>
using namespace std;

void fun1(int a){      // function define foe tail recursion
    if(a>0){
        cout<<a<<" ";
        fun1(a-1);
    }
}

void fun2(int b){         // function define for head recursion
    if(b>0){
        fun2(b-1);
        cout<<b<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    cout<<"         Tail Recursion : "<<endl;
    fun1(n);
    cout<<endl<<"         Head Recursion : "<<endl;
    fun2(n);
    return 0;
}