#include <iostream>
using namespace std;

void reverse(int *a, int n){
    int temp;
    temp = a[0];
    for(int i=0 ; i<n ; i++){
        a[i] = a[i+1] ; 
    }
    a[n-1] = temp;
}

int main() {
    //Write your code here
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    cin>>k;
    while(k){
        reverse(arr,n);
        k--;
    }
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}