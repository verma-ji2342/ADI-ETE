#include <iostream>
using namespace std;

int strcount(char arr[]){
  int count=0;
  for(int i=0 ; arr[i] != '\0' ; i++){
    count++;
  }
  return count;
}
char reverse(char arr[]){
  int size = strcount(arr);
  int start=0 , end = size-1;
  while(start<end){
    char temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

int main() 
{
  char chr[20];
  cin.getline(chr,20);
  cout<<chr;
  reverse(chr);
  cout<<endl<<"reverse of string is "<<chr<<endl;
  return 0;
}