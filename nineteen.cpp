#include <bits/stdc++.h>
using namespace std;

int solve(int target){
    if(target == 0){
        return 0;
    }
    int ans = 0;
    while(target){
        if(target%2 == 1){
            target -= 1;
        }
        else{
            target /= 2;
        }
        ans++;
    }
    return ans;
}

int main(){
    int target;
    cin>>target;
    cout<<solve(target);
    return 0;
}