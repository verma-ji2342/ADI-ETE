// #include <bits/stdc++.h>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

string LCS(string s1, string s2){
    int n = s1.size();
    int m = s2.size();
    int dp[n+1][m+1];
    for(int i=0 ; i<=m ; i++){
        dp[0][i] = 0;
    }
    for(int i=0 ; i<=n ; i++){
        dp[i][0] = 0;
    }
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=m ; j++){
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    // for(int i=0 ; i<=n ; i++){
    //     for(int j=0 ; j<=m ; j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    string ans="";
    int x=n, y=m;
    while(x != 0 && y != 0){
        if(dp[x][y-1] == dp[x][y]){
            y--;
        }
        else if(dp[x-1][y] == dp[x][y]){
            x--;
        }
        else{
                ans = ans + s2[y-1];
                y--;
                x--;
        }
    }
    reverse(ans.begin(), ans.end());
    // cout<<ans<<endl;
    return ans;
}


int main(){
    string s1, s2;
    cin>>s1>>s2;
    cout<<LCS(s1,s2)<<endl;
    return 0;
}