#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fun(int n){
    if(n>100){
        return n-10;
    }
    else {
        return (fun(fun(n+11)));
    }
}

int main(){
    int x;
    cin>>x;
    cout<<fun(x);
    return 0;
}