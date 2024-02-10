
/// This is program without using stacks

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
        }
        for(int i=0 ; i<n ; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        int a[n];
        a[n-1] = -1;
        for(int i=n-2 ; i>=0 ; i--){
            if(arr[i]<arr[i+1]){
                a[i]=arr[i+1];
            }
            else {
                a[i]=-1;
            }
        }

        cout<<"After checking the next greater element "<<endl;
        for(int i=0 ; i<n ; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
   }
}