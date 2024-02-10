#include <bits/stdc++.h>
using namespace std;


int main(){
    string str;
    cin>>str;
    string ans;
    int i=0;
    while(i < str.size()){
        if(i%2 == 0){
            str[i] += 1;
        }
        else{
            str[i] -= 1;
        }
        i++;
    }
    cout<<str;
    return 0;
}