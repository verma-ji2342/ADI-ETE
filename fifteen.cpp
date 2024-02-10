#include <bits/stdc++.h>
using namespace std;

void getZarr(string s, int Z[]){
    int n = s.length();
    int L, R, k;

    L=R=0;
    for(int i=1 ; i<n ; i++){
        if(i > R){
            L = R = i;
            while(R<n && s[R-L]==s[R]){
                R++;
            }
            Z[i] = R-L;
            R--;
        }else{
            k = i-L;
            if(Z[i] < R-i+1){
                Z[i] = Z[k];
            }else{
                L=i;
                while(R<n && s[R-L]==s[R]){
                    R++;
                }
                Z[i] = R-L;
                R--;
            }
        }
    }
}


int search(string text, string pat){
    string concat = pat + "$" + text;
    int l = concat.length();

    int Z[l];
    getZarr(concat, Z);
    int ans = 0;

    for(int i=0 ; i<l ; i++){
        if(Z[i] == pat.length()){
            cout<<"Pattern found at index "<<i-pat.length()-1<<endl;
            ans++;
        }
    }
    return ans;
}

int main(){
    string text, word;
    getline(cin, text);
    cin>>word;

    cout<<search(text, word);
    return 0;
}