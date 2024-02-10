#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int N , k , flag=0;
        cin>>N>>k ;
        vector<int>arr(N) ;
        for(int i=0 ; i<N ; i++){
            cin>>arr[i];
        }
        int rem ;
        for(int i=0 ; i<N ; i++){
            if(arr[i]>=k){
                rem = arr[i] - k;
                arr[i+1] += rem;
            }
            else {
                cout<<"NO"<<" "<<i+1<<"\n";
                flag=1;
            }
        }
        if(flag == 0){
            cout<<"YES"<<endl;
        }
    }
}