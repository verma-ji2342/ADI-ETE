#include <bits/stdc++.h>
using namespace std;

int main(){
    string text;
    string pat;
    getline(cin, text);
    cin>>pat;
    transform(text.begin(), text.end(), text.begin(), ::tolower);
    transform(pat.begin(), pat.end(), pat.begin(), ::tolower);
    // cout<<text<<endl<<pat;
    cout<<text.find(pat);
}