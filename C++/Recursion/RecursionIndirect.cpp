#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void funB(int x);

void funA(int n){
    if(n>0){
        cout<<n<<" ";
        funB(n-1);
    }
}

void funB(int x){
    if(x>0){
        cout<<x<<" ";
        funA(x/2);
    }
}

int main(){
    int a;
    cin>>a;
    funA(a);
    return 0;
}