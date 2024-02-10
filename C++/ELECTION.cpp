#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

int main(){
    int T;
    cin>>T;
    while(T--){
        string res = "NOTA";
        int A, B, C;
        cin>>A>>B>>C;
        if(A>B && A>50){
            if(A>C){
                res = 'A';
            }
            else {
                if (C>50) res = 'C';
            }
        }
        else {
            if(B>C && B>50){
                res = 'B';
            }
            else {
                if(C>50) res = 'C';
            }
        }

        cout<<res<<"\n";
    }
    return 0;
}