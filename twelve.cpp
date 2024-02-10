#include <bits/stdc++.h>
using namespace std;

int count(string s){
    int i=0;
    int c = 0;
    while(i < s.size()){
        if(s[i] >='A' && s[i] <= 'Z'){
            c += s[i] - 'A'+1;
        }
        else{
            c -= s[i] - 'a'+1;
        }
        i++;
    }
    if(c < 0){
        return 0;
    }
    else if(c > 9){
        return 9;
    }
    else {
        return c;
    }
}

string code(string s){
    stringstream ss(s);
    vector<string> v;
    while (getline(ss, s, ' ')) {
        v.push_back(s);
    }
    string res = "";
    int ans = 0;
    for(string x : v){
        res += to_string(count(x));
        // cout<<(x)<<" ";
    }
    return res;
}

int main(){
    string str;
    getline(cin, str);
    cout<<code(str);
    return 0;
}