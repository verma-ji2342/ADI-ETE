#include <iostream>
using namespace std;


void solver(string str){
    for(int i=0 ; i<4 ; i++){
        for(int j=0 ; j<4 ; j++){
            if(i == j) continue;
            for(int k=0 ; j<4 ; j++){
                if(k == j || k==i) continue;
                for(int l=0 ; l<4 ; l++){
                    if(k == l || l==i || l==j) continue;
                    cout<<str[i]<<str[j]<<str[k]<<str[l]<<endl;
                }
            }
        }
    }
}


int main(){
    string str;
    cin>>str;
    solver(str);
    return 0;
}