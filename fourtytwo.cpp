#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int>&arr, int n, int i){
    int minindex = i;
    int l = 2*i+1;
    int r = 2*i+2;

    if(l < n && arr[l] < arr[minindex]){
        minindex = l;
    }

    if(r < n && arr[r] < arr[minindex]){
        minindex = r;
    }

    if(minindex != i){
        swap(arr[i], arr[minindex]);
        heapify(arr, n, minindex);
    }
}
void buildHeap(vector<int>&arr, int n){
    for(int i=n/2 -1 ; i>=0 ; i--){
        heapify(arr, n, i);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    buildHeap(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}