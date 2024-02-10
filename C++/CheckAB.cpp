#include <iostream>
#include <bits/stdc++.h>
using namespace std;


bool check(char input[]){
  if(input[0] == '\0'){
    return true;
  }
  
  bool sos;
  
  if(input[0] == 'a' && (input[1] == '\0' || input[1] == 'a')){
    sos = check(input+1);
  }
  else if(input[0] == 'a' && (input[1] == 'b' && input[2] == 'b')){
    sos = check(input+1);
  }
  else if((input[0] == 'b' && input[1] == 'b') && (input[2] == '\0' || input[2] == 'a')){
    sos = check(input+2);
  }
  else {
    return false;
  }
  return sos;
}

int main() 
{
  char s[100];
  cin>>s;
  if(check(s)) cout<<"String is valid :)";
  else cout<<"string is not valid :(";
  return 0;
}