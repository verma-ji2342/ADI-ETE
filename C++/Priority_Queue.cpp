#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {6,8,1,2,3};
    priority_queue<int>pq(arr,arr+5);
    // for(int i=0 ; i<5 ; i++){
    //     arr[i] = -arr[i];
    // }
    while(pq.empty() == false){
        cout<<  pq.top()<<" ";
        pq.pop();
    }
    return 0;
}