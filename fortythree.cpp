#include <bits/stdc++.h>
#include <utility>
using namespace std;


void solve(vector<int>&arr, int n){
    if(n == 0) return ;

    vector<pair<int, int>> p;
    for(int i=0 ; i<n ; i++){
        p.push_back({arr[i], i});
    }
    sort(p.begin(), p.end(), greater<pair<int, int>>());
    for(auto x : p){
        cout<<x.second<<" ";
    }
    return ;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    solve(arr, n);
}