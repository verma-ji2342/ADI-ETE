#include<iostream>
using namespace  std;



void findPalindrome(string t, int arr[]){
    int i=0;
    arr[0] = 0;
    for(int j=0 ; j<t.size() ; j++){
        while((j-i-1) >= 0 && (j+1+i)<t.size() && t[j-i-1] == t[j+i+1]){
            i++;
        }
        arr[i] = i;
        i=0;
    }
}

int main(){
    string text;
    cin>>text;
    string T ;
    for(int i=0 ; i<text.length() ; i++){
        T += "#"+text[i];
    }
    int n = T.size()+1;
    int p[n];
    findPalindrome(T+"#", p);
    for(int i=0 ; i<n ; i++){
        cout<<p[i]<<" ";
    }
    return 0;
}