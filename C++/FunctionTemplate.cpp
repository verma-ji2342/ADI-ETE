#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template<class X>

X big(X a, X b){
    if(a>b) return a;
    else return b;
}


int main(){
    int a, b;
    cin>>a>>b;
    cout<<big(a,b)<<endl;
    cout<<big(10.56,10.57);
    return 0;
}