#include <iostream>
using namespace std;

int fun(int a){        // this is tail recursion 
    int static x=0;
    if(a>0){
        x++;
        return fun(a-1) + x;
    }
    return 0;
}

int main(){
    int x;
    cin>>x;
    cout<<fun(x);
    return 0;
}