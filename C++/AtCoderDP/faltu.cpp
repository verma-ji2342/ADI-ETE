// #include<bits/stdc++.h>
#include <iostream>
#include <cstring>
using namespace std;

 
int m = 1000000007;

int nth_stair(int n){
    if(n == 0){
        return 1;
    }
    if(n == 1){
        return 1;
    }
    int ans1 = nth_stair(n-1)%m;
    int ans2 = nth_stair(n-2)%m;
    return max(ans1,ans2)%m;
}


int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<nth_stair(n)<<endl;
    }
 	return 0;
}