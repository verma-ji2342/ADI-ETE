#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int>s;

int mini(vector<int>a){
    sort(a.begin(),a.end());
    return a[0];
}

void fuck(vector<int>a){
    if(a.size() == 0) return;
    int m = mini(a);
    // cout<<m<<" ";
    s.push_back(m);
    vector<int>t;
    int i=0;
    while(i < a.size()){
        t.push_back(a[i]);
        // cout<<a[i]<<" ";
        if(a[i] == m && i == 0){
            t.pop_back();
            i++;
        }
        else if(a[i] == m && i == a.size()-1){
            t.pop_back();
            t.pop_back();
        }
        else if(a[i] == m){
            t.pop_back();
            t.pop_back();
            i++;
        }
        i++;
    }
    // cout<<endl;
    fuck(t);
}




int main(){
    // 1 2 3 4 6 4 8  --- 1
    // 3 4 6 4 8    --- 3
    // 6 4 8        --- 4
    vector<int>arr;
    int n;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }

    fuck(arr);
    int ans=0;
    for(int i : s){
        ans += i;
        // cout<<i<<" ";
    }
    cout<<ans;
    return 0;
} 