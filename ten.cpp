#include <bits/stdc++.h>
using namespace std;


int helper(int ind, int prev_ind, vector<int> &arr, vector<vector<int>> &dp){
    if(ind == arr.size()){
        return 0;
    }
    if(dp[ind][prev_ind+1] != -1){
        return dp[ind][prev_ind+1];
    }

    int len = 0 + helper(ind+1, prev_ind, arr, dp);

    if(prev_ind == -1 || arr[ind] > arr[prev_ind]){
        len = max(len, 1+helper(ind+1, ind, arr, dp));
    }

    return dp[ind][prev_ind+1] = len;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    vector<vector<int>> dp(arr.size(), vector<int>(arr.size()+1, -1));
    cout<<helper(0, -1, arr, dp);
    return 0;
}