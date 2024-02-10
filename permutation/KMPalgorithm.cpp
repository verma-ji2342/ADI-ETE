#include <iostream>
#include <string>
using namespace std;



void ComputeLPSArray(string pat, int m, int lps[]){
    int len = 0;
    lps[0] = 0;

    int i=1;
    while(i < m){
        if(pat[i] == pat[len]){
            len++;
            lps[i] = len;
            i++;
        }
        else{
            if(len != 0){
                len = lps[len-1];
            }
            else{
                lps[i] = 0;
                i++;
            }
        }
    }
    for(int i=0 ; i<m ; i++){
        cout<<lps[i]<<" ";
    }
}

void KMPSearch(string text, string pat){
    int m = pat.size();
    int n = text.size();

    int lps[m];
    ComputeLPSArray(pat, m, lps);

    int i=0;
    int j=0;
    while((n-i) >= (m-j)){
        if(pat[j] == text[i]){
            j++;
            i++;
        }
        if(j == m){
            cout<<"Found pattern at index "<<i-j<<endl;
            j=lps[j-1];
        }
        else if(i < n && pat[j] != text[i]){
            if(j != 0){
                j = lps[j-1];
            }else{
                i++;
            }
        }
    }
}




int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  
    string text, pat;
    cin>>text>>pat;
    KMPSearch(text, pat);
    return 0;
}