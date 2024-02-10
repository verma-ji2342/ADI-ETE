#include <iostream>
using namespace std;

int strcount(char arr[]){
  int count=0;
  for(int i=0 ; arr[i] != '\0' ; i++){
    count++;
  }
  return count;
}

char replace(char *arr , char x , char rpl){
  int size = strcount(arr);
  for(int i=0 ; i<size ; i++){
    if(arr[i] == x){
      arr[i] = rpl;
    }
  }
}

int main() 
{
  char chr[20], y, rep;
  cin.getline(chr,20);
  cin>>y>>rep;
  cout<<chr;
  replace(chr , y , rep);
  cout<<endl<<"Replacing the word in string:  "<<chr<<endl;
  return 0;
}