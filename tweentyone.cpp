#include <bits/stdc++.h>
using namespace std;

int solve(int num1, int num2){
    int res=0;
    while(num1 <= num2){
        string str = to_string(num1++);
        if(str.size()%2) continue;
        res += (str.size()==2 ? str[0] == str[1] : str[0]+str[1]==str[2]+str[3] ? 1 : 0);
    }
    return res;
}

int main(){
    int low;
    int high;
    cin>>low>>high;
    cout<<solve(low, high);
    return 0;
}