#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        long int n;
        cin>>n;
        char s[n] , c[n/2] ;
        if(n==00) continue;
        cin>>s;
        int i, j=0 ;
        for(i=0 ; i<n ; i+2){
            if((s[i] == '0') && (s[i+1] == '0')){
                c[j] = 'A';
            }
            else 
            if((s[i] == '0') && (s[i+1] == '1')){
                c[j] = 'T';
            }
            else 
            if((s[i] == '1') && (s[i+1] == '0')){
                c[j] = 'C';
            }
            else 
            if((s[i] == '1') && (s[i+1] == '1')){
                c[j] = 'G';
            }
            j++;
            i += 2;
        }
        c[j] = '\0';
        cout<<c<<endl;
    }
    return 0;
}