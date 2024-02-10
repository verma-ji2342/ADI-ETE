#include <iostream>
using namespace std;

void LinearSearch(int a[] , int n , int s){
    int flag=0;
    for(int i = 0 ; i< n ; i++){
        if(a[i] == s) {
            flag++;
            break;
        }
    }
    if(flag != 0){
        cout<<"Search element found"<<endl;
    }
    else cout<<"Element is not in array"<<endl;
}

int main(){
    int n;
    cout<<"Enter the size of array : \n";
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++) cin>>arr[i];
    cout<<"Enter the search element : \n" ;
    int s ;cin>>s;
    LinearSearch(arr , n , s);
    return 0 ;
}
