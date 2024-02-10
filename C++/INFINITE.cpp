#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        if((n%5 == 1) ||(n%5 == 0)){
            cout<<(n/5)*2<<endl;
        }
        else {
            cout<<(n/5)*2 + 1<<endl;
        }
    }
    return 0;
}