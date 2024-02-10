#include <bits/stdc++.h>
using namespace std;

void helper(int N, string s){
    int n = s.size();
    int arr[n];
    int i = n-1;
    while(i >= 0){
        if(s[i] == 'D'){
            arr[i] = N;
            N++;
        }
        i--;
    }
    i=0;
    while(i < n){
        if(s[i] == 'I'){
            arr[i] = N;
            N++;
        }
        i++;
    }
    i=0;
    while(i < n){
        cout<<arr[i]<<" ";
        i++;
    }
}

    
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    helper(n,s);
    return 0;
}