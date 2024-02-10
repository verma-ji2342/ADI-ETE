#include <iostream>
#include <cstring>
using namespace std;

int main() {
  char st1[100] , st2[100];
  cin>>st1>>st2;
  cout<<"lengh of first string is: "<<strlen(st1)<<endl;
  cout<<"length of second string is: "<<strlen(st2)<<endl;
  cout<<"first string is :"<<st1<<endl;
  cout<<"second string is :"<<st2<<endl;
  cout<<strcmp(st1,st2)<<endl;
  if(strcmp(st1,st2) == 0){
    cout<<"both strings are equal"<<endl;
  }
  else {
    cout<<"strings are not equal"<<endl;
  }
  
  char str1[100];
  strcpy(str1,st1);
  cout<<"st1 content is copy to str1: "<<str1<<endl;
  
  char str2[100];
  strncpy(str2,st1,5); // here null character is not copy to the string
  cout<<"5 characters of st1 copied to str2: "<<str2<<endl; 
  
  strncpy(str1,st2,6);
  cout<<str1<<endl;
  cout<<str1[7]; // this shows that only characters are copy and if characte will finish then null character will copied in the place of left element.
  
  return 0;
}