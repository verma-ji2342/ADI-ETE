#include <bits/stdc++.h>
using namespace std;


string solve(string str){
    int i=1;
    string ans="";
    ans += str[0];
    while(i < str.size()){
        int diff = str[i] - str[i-1];
        ans += to_string(diff);
        ans += str[i];
        i++;
    }
    return ans;
}

int main(){
    string str;
    cin>>str;
    cout<<solve(str);
    return 0;
}