#include <bits/stdc++.h>
using namespace std;

void insertsort(int arr[], int n){
    int i, j, mini;

    for(i=0 ; i<n-1 ; i++){
        mini = i;
        for(j=i+1 ; j<n ; j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
        
        if(mini != i){
            swap(arr[i], arr[mini]);
        }
        for(int k=0 ; k<n ; k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    insertsort(arr, n);
}