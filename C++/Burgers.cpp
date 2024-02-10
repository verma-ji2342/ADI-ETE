#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int p, b;
        cin>>p>>b;
        if(p>b) cout<<b<<endl;
        else cout<<p<<endl;
    }
    return 0;
}