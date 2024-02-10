#include <iostream>
#include <cstring>
using namespace std;

void prefix(char chr[]){
  for(int i=0 ; chr[i] != '\0' ; i++){
    for(int j=0 ; j<=i ; j++){
      cout<<chr[j];
    }
    cout<<endl;
  }
}

void printsubstring(char *chr){
  int l = strlen(chr), i=0 ; 
  while(i<l){
    char arr[200];
    int x=0;
    for(int z=i ; chr[z] != '\0' ; z++){
      arr[x] = chr[z];
      x++;
    }
    arr[x] = '\0';
    prefix(arr);
    i++;
  }
}

int main() 
{
  char chr[100];
  cin>>chr;
  printsubstring(chr);
  // int l=strlen(chr);
  // for (int z=0 ; z<l ; z++){
  //   for (int i=0 ; i<l ; i++){
  //     for(int j=z ; j<=i ; j++){
  //       cout<<chr[j];
  //     }
  //     cout<<endl;
  //   }
  // }
  return 0;
}