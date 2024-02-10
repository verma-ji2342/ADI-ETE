#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long int fact(int a){
    if(a==0) return 1;
    else return fact(a-1)*a;
}

int main(){
    int x;
    cout<<"Enter the number : ";
    cin>>x;
    cout<<fact(x);
    return 0;
}