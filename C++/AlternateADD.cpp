#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        long int x, y,i=1 ;
        cin>>x>>y;
        while(x<y){
            if(i%2 != 0){
                i++;
                x += 1;
            }
            else {
                i++;
                x += 2;
            }
        }
        if(x == y) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}