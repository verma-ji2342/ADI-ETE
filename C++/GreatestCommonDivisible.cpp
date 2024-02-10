#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int a, b, i=1, GCD, x;
        cin>>a>>b;
        if(a>b) x=b;
        else x=a;
        while(i<=x){
            if((a%i == 0) && (b%i == 0)){
                GCD = i;
                i++;
                continue;
            }
            i++;
        }
        cout<<GCD<<endl;
    }
    return 0;
}