#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n, left;
        cin>>n;
        char arr[n];
        cin>>arr;
        int P=0 , A=0;
        for(int i=0 ; i<n ;i++){
            if(arr[i] == '1') P++;
            else A++;
        }
        float att;
        left = 120-n;
        att = (left + P)*100/120 ;
        if(att>75){
            cout<<"YES"<<"\n";
        }
        else {
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}