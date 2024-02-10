// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    vector<int>ans;
    while(n != -1){
        ans.push_back(n);
        cin>>n;
    }
    sort(ans.begin(), ans.end());
    cout<<ans[0]<<" "<<ans[ans.size()-1];
    return 0;
}