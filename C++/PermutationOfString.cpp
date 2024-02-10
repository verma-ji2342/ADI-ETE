#include <iostream>
using namespace std;

int c=0;

void Perm(char s[], int l, int h){
  if(l == h){
    cout<<s<<" "<<++c<<endl;
  }
  else {
    for(int i=l ; i<=h ; i++){
      swap(s[l], s[h]);
      Perm(s, l+1, h);
      swap(s[l], s[i]);
    }
  }
}

int main() 
{
  char c[] = "ABCD";
  Perm(c,0,3);
  cout<<c;
  return 0;
}