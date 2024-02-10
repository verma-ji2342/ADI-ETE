#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<int>arr(26,-1);
    string pat;
    string text;
    cin>>pat;
    cin>>text;
    if(pat.size() != text.size()){
        cout<<"NO";
        return 0;
    }

    for(int i=0 ; i<pat.size() ; i++){
        int t = text[i] - 'a';
        // cout<<"t"<<t;
        int p = pat[i] - 'a';.
        // cout<<"p"<<p;
        // cout<<"arr"<<arr[p];
        if(arr[p] == -1){
            arr[p] = t;
        }
        else if(arr[p] != t){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}