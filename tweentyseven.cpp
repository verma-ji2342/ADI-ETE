#include <bits/stdc++.h>
using namespace std;

int solve(string s, string t){
    if(s.size()==0 || t.size()==0) return 0;
    int i=0, j=0;
    while(i<s.size() && j<t.size()){
        if(s[i] == t[j]){
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    return i;

}

int main(){
    string S, T;
    cin>>S>>T;
    cout<<solve(S, T);
}