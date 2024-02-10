#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i){
    int large = i;
    int l = 2*i+1;
    int r = 2*i+2;

    if(l<n && arr[l] > arr[large]){
        large = l;
    }
    if(r<n && arr[r] > arr[large]){
        large = r;
    }

    if(large != i){
        swap(arr[i], arr[large]);
        heapify(arr, n, large);
    }
}


void SortKarDo(int arr[], int n){
    for(int i= n/2-1 ; i>=0 ; i--){
        heapify(arr, n, i);
    }

    for(int i=n-1 ; i>=0 ; i--){
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    SortKarDo(arr,n);

    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}