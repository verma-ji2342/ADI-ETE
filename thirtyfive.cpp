#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0 ; i<=n ; i++){
        cout<<__builtin_popcount(i)<<" ";
    }
    return 0;
}