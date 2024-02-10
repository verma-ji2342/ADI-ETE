#include <bits/stdc++.h>
using namespace std;

bool solver(string text, string pat){
    string s;
    stringstream ss(text);

    vector<string> v;

    while (getline(ss, s, ' ')) {
        cout<<s<<" ";
        v.push_back(s);
    }
    map<char, string>mp;
    int i=0, j=0;
    while(j < v.size() && i < pat.size()){
        if(mp.find(pat[i]) == mp.end()){
            mp[pat[i]] = v[j];
            j++;
            i++;
            continue;
        }     
        else if(mp[pat[i]] != v[j]){
            return false;
        }
        i++;
        j++;
    }
    return true;
}


int main(){
    string pat;
    cin>>pat;
    string text;
    cin>>text;
    getline(cin, text);

    cout<<solver(text, pat)<<endl;
    return 0;
}