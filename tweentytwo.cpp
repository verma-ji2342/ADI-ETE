#include <bits/stdc++.h>
using namespace std;

int countWay(int n){
    if(n == 0){
        return 1;
    }
    if(n < 0){
        return 0;
    }

    int a = countWay(n-1);
    int b = countWay(n-2);
    int c = countWay(n-3);

    return a+b+c;
}

int main(){
    int n;
    cin>>n;

    cout<<countWay(n);
    return 0;
}