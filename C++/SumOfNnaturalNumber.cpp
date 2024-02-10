#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n == 0){
        return 1;
    }
    else return sum(n-1) + n;
}

int main(){
    int x;
    cin>>x;
    cout<<"SUM OF N NATURAL NUMBER IS : "<<sum(x);
    return 0;
}