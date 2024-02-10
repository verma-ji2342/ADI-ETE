#include <iostream>
using namespace std;


void solver(string str){
    int ans=0;
    for(int i=0 ; i<4 ; i++){
      for(int j=0 ; j<4 ; j++){
        for(int k=0 ; k<4 ; k++){
          for(int l=0 ; l<4 ;l++){
            cout<<str[i]<<str[j]<<str[k]<<str[6-i-j-k]<<endl;
            ans++;
          }
        }
      }
    }
    cout<<ans;
}


int main(){
    string str;
    cin>>str;
    solver(str);
    return 0;
}