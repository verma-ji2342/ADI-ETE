#include <iostream>
using namespace std;


void solver(string str){
    int ans=0;
    for(int i=0 ; i<5 ; i++){
      for(int j=0 ; j<5 ; j++){
        if(i == j) continue;
        for(int k=0 ; k<5 ; k++){
          if(k == i || k == j) continue;
          for(int l=0 ; l<5 ; l++){
            if(l == i || l == j || l == k) continue;
            int m = 10 - i-j-k-l;
            cout<<str[i]<<str[j]<<str[k]<<str[l]<<str[m]<<endl;
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