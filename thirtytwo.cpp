#include <bits/stdc++.h>
using namespace std;

int solver(vector<int> &arr, int target, int ind){
    if(target == 0){
        return 1;
    }

    if(target < 0 || ind == arr.size()) return 0;
    int res = 0;

    return solver(arr, target - arr[ind], ind) + solver(arr, target, ind+1);
}


int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    cout<<solver(arr, target, 0);
    return 0;
}