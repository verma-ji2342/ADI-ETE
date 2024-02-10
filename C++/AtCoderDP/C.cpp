#include<iostream>
#include<math.h>
#include<cstring>
using namespace std;

long long n, a[100009], b[100009], c[100009];
long long dp[10009][4];

long long solve(int idx, int prev){
    if(idx == n)  return 0;
    if(dp[idx][prev] != -1){
        return dp[idx][prev]; 
    }

    long long ans = INT_MIN;
    if(prev == 0){
        ans = max(ans, b[idx] + solve(idx+1, 1));
        ans = max(ans, c[idx] + solve(idx+1, 2));
    } else if(prev == 1){
        ans = max(ans, a[idx] + solve(idx+1, 0));
        ans = max(ans, c[idx] + solve(idx+1, 2));
    } else if(prev == 2){
        ans = max(ans, b[idx] + solve(idx+1, 1));
        ans = max(ans, a[idx] + solve(idx+1, 0));
    }else{
        ans = max(ans, a[idx] + solve(idx+1, 0));
        ans = max(ans, b[idx] + solve(idx+1, 1));
        ans = max(ans, c[idx] + solve(idx+1, 2));
    }
    return dp[idx][prev] = ans;
}


int main(){
    memset(dp, -1, sizeof(dp));
    cin>>n;
    for(int i=0 ; i<n ; i++){
        cin>>a[i]>>b[i]>>c[i];
    }
    cout<<solve(0,3);
    return 0;
}