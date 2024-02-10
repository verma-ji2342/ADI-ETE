#include <iostream>
using namespace std;

void print(int num , string output){
  string s[8] = {"abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs" , "tuv" "wxyz" };
  
  if(num == 0){
    cout<<output<<endl;
    return ;
  }
  
  for(int k = 0 ; k < s[num%10 - 2].length() ; k++){
    print(num/10 , s[num%10 - 2][k] + output);
  }
}

int main() 
{
  int n;
  cin>>n;
  print(n,"");
  return 0;
}