#include <iostream>
#include <cstring>
using namespace std;
char arr[1000][1000];
const int mod = 1000000007;
int dp[1000][1000];


int findPath(int H, int W){
    dp[0][0]=1;
    for(int i=0 ; i<H ; i++){
        for(int j=0 ; j<W ; j++){
            if(arr[i][j] == '#'){
                continue;
            }
            if(i==0 && j==0){
                continue;
            }
            if(i==0){
                dp[i][j] = dp[i][j-1];
            }
            else if(j==0){
                dp[i][j] = dp[i-1][j];
            }
            else{
                dp[i][j] = (dp[i][j]%mod + dp[i-1][j]%mod + dp[i][j-1]%mod)%mod;
            }
        }
    }
    return dp[H-1][W-1];
}


int main(){
    int H, W;
    cin>>H>>W;
    for(int i=0 ; i<H ; i++){
        for(int j=0 ; j<W ; j++){
            cin>>arr[i][j];
        }
    }
    cout<<findPath(H, W);
    return 0;
}