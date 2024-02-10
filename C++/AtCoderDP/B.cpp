#include<iostream>
using namespace std;
const int N = 1e5+10;

int arr[N];
int dp[N];
int k;

int minCost(int n){
  if(n == 0) return 0;
  if(dp[n] != -1) return dp[n];
  int cost = INT_MAX;
  for(int i=1 ; i<=k ; i++){
      if(n-i >= 0){
          cost = min(cost, minCost(n-i) + abs(arr[n] - arr[n-i]));
      }
      else{
          break;
      }
  }
  return dp[n] = cost;
}


int main(){
  memset(dp,-1, sizeof(dp));
  int n;
  cin>>n>>k;
  for(int i=0 ; i<n ; i++){
    cin>>arr[i];
  }
  cout<<minCost(n-1);
  return 0;
}