#include <iostream>
using namespace std;

void setElement(int *ar, int e, int i){
  int sz = sizeof(ar);
  int k=sz;
  while(k > i){
    if(k != i){
      ar[k] = ar[k-1];
    }
    if(k-1 == i) ar[i] = e;
    k--;
  }
}
  

int main() 
{
  int arr[100] = {1,2,3,4,5,6,7};
  cout<<"Arrays: "<<endl;
  for(int i=0 ; i<7; i++) cout<<arr[i]<<" ";
  cout<<endl;
  int ele, index;
  cin>>ele>>index;
  if(index<8) {
    setElement(arr, ele, index);
    cout<<"New Array : \n";
    for(int i=0 ; i<8; i++) cout<<arr[i]<<" ";}
  else cout<<"Inset the valid values : ";
    return 0; 
}