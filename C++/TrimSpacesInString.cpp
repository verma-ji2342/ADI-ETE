#include <iostream>
#include <cstring>
using namespace std;

int strcount(char arr[]){
  int count=0;
  for(int i=0 ; arr[i] != '\0' ; i++){
    count++;
  }
  return count;
}

void trimspace(char arr[]){
  int size = strcount(arr), j=0;
  char trim[size];
  for(int i = 0 ; i < size ; i++){
    if(arr[i] != ' '){
      trim[j] = arr[i];
      j++;
    }
  }
  trim[j] = '\0';
  strcpy(arr, trim);
}

int main() 
{
  char chr[50];
  cin.getline(chr,50);
  cout<<chr;
  trimspace(chr);
  cout<<endl<<"After trim space of string is:  "<<chr<<endl;
  return 0;
}