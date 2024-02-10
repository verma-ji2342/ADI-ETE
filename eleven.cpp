#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<int>&height, int brick, int ladder){
    int maxbuilding = height[0];
    int ans = 0;

    for(int i=1 ; i<n ; i++){
        if(height[i-1] >= height[i]){
            ans = i;
            continue;
        }
        else{
            if(height[i] - height[i-1] <= brick){
                brick -= (height[i] - height[i-1]);
                ans = i;
            }
            else if(height[i] - height[i-1] > brick && ladder != 0){
                ladder--;
                ans = i;
            }
            else{
                return i-1;
            }
        }
    }
    return ans;
}


int main(){
    int n;
    cin>>n;
    vector<int>height(n);
    for(int i=0 ; i<n ; i++){
        cin>>height[i];
    }
    int brick;
    cin>>brick;
    int ladder;
    cin>>ladder;

    cout<<solve(n, height, brick, ladder);
    return 0;
}