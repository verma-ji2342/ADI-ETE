#include <iostream>
using namespace std;


bool is_sorted(int a[] , int size){
    if(size == 1 || size == 0){
        return true;
    }
    if(a[0]>a[1]){
        return false;
    }
    bool issorted = is_sorted(a+1 , size-1);
    if(issorted) return true;
    else return false;
}

int main(){
    int arr[] = {1,2,5,6,7,8,2};
    if(is_sorted(arr,7)) cout<<"sorted"<<endl;
    else cout<<"unsorted"<<endl;
    return 0;
}