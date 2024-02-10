#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n, x;
        cin>>n>>x;
        int total = 0;
        if(n%6 == 0){
            cout<<x*(n/6)<<endl;
        }
        else {
            cout<<x*(n/6) + x<<endl;
        }
    }
    return 0;
}