#include <iostream>
using namespace std;

void Sort(int a[], int s){
  int i, j;
    for(i=0 ; i<s-1 ; i++){
        for(j=0 ; j<s-1-i ; j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

void BinarySearch(int a[], int l, int u, int s){
    int f=0;
    while(u>=l){
        int mid = (l+u)/2;
        if(a[mid] == s) {
            cout<<"Element is found at "<<mid+1<<endl;
            f++;
            break;
        }
        if(a[mid]<s){
            l = mid+1;
        }
        if(a[mid]>s){
            u = mid+1 ;
        }
    }
    if(f == 0 ) cout<<"Element not in array \n";
}

int RBinarySearch(int a[], int l, int h, int s){
    int mid = 0;
    if(l<=h){
        mid = (l+h)/2;
        if(a[mid] == s) return mid;
        else if(s<a[mid]) return RBinarySearch(a,l,mid-1,s);
        else return RBinarySearch(a, mid+1, h, s);
    }
    return -1;
}


int main(){
    int n;
    cout<<"Enter the size of array : \n";
    cin>>n;
    int arr[n];
    cout<<"Enter ellements in  array :\n";
    for(int i=0 ; i<n ; i++) cin>>arr[i];
    cout<<"Enter the search element : \n" ;
    int s ;
    cin>>s;
    Sort(arr,n);
    cout<<"sorted array: \n";
    for(int i:arr)cout<<i<<" ";
    cout<<endl;
    BinarySearch(arr,0,n-1,s);
    cout<<RBinarySearch(arr,0,n,s);
    return 0;
}