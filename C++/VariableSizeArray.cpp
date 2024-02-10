#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q, s, w, i;
    vector<vector<int>> outer ;
    cin>>n>>q;
    for(int i=0 ; i<n ; i++){
        cin>>s;
        vector<int>inner;
        for(int j=0 ; j<s ; j++){
            int x;
            cin>>x;
            inner.push_back(x);
        }
        outer.push_back(inner);
    }
    for(int k=0 ; k<q ; k++){
        cin>>w>>i;
        cout<<outer[w][i]<<endl;
    }
    return 0;
}