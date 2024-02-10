#include <iostream>
using namespace std;

//INSERTION ANYWHERE

void DeleteElement(int *ar, int i){
  int k= sizeof(ar) ;
  while(i<k){
    ar[i] = ar[i+1];
    i++;
  }
}


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
    int d;
    cout<<endl<<"Inset the index which you want to delete element : "<<endl;
    cin>>d;
    DeleteElement(arr,d);
    cout<<endl<<"Array After Deletion"<<endl;
    for(int i=0 ; i<7; i++) cout<<arr[i]<<" ";
    return 0; 
}