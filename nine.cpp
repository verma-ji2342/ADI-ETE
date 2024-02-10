#include <bits/stdc++.h>
using namespace std;


void solve(int arr[], int n, int ws, vector<int>&ans){
    int j = 0;
    for(int i=0 ; i<n && j<=n-ws ; i++){
        j=i;
        while(j < ws+i && j < n){
            if(arr[j] < 0){
                // cout<<arr[j]<<" ";
                ans.push_back(arr[j]);
                break;
            }
            j++;
        }
        if(j == ws+i){
            ans.push_back(0);
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    int ws;
    cin>>ws;
    vector<int>ans ;
    solve(arr, n, ws, ans);
    for(int x : ans){
        cout<<x<<" ";
    }
    return 0;
}