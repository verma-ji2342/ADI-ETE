#include <iostream>
using namespace std;


void ComputeLPSArray(string pat, int m, int lps[]){
    int len=0;
    lps[0] = 0;
    int i=1;
    int n = pat.size();
    while(i<n){
        if(pat[i] == pat[len]){
            len++;
            lps[i] = len;
            i++;
        }
        else{
            if(len != 0){
                len = lps[len-1];
            }else{
                lps[i] = 0;
                i++;
            }
        }
    }
}


void SearchKarBhai(string text, string pat){
    int m = pat.size();
    int n = text.size();

    int lps[m];
    ComputeLPSArray(pat, m, lps);
    int i=0, j=0;
    while((n-i) >= (m-j)){
        if(text[i] == pat[j]){
            i++;
            j++;
        }
        if(j == m){
            cout<<"Found at index : "<<i-j<<endl;
            j = lps[j-1];
        }else if(i < n && text[i] != pat[j]){
            if(j != 0){
                j = lps[j-1];
            }
            else{
                
                i++;
            }
        }
    }
}


int main(){
    string text, pat;
    cin>>text>>pat;

    SearchKarBhai(text, pat);
    return 0;
}