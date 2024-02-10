#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    long int T;
    cin>>T;
    while(T){
        long int N, min_step=0;
        cin>>N;
        long int i=1, flag=0;
        for(int l=1 ; l<4 ; l++){

            if((i+l) == N){
                min_step = 1;
                flag = 1;
                break;
            }
        }

        if(flag == 0){
            for(int l=1 ; l<4 ; l++){

                int k= i+1 ;
                if(((k+l) == N) && l!=1){
                    min_step = 2;
                    flag = 1;
                    break;
                }

                k = i+2;
                if(((k+l) == N) && l!=2){
                    min_step = 2;
                    flag = 1;
                    break;
                }
                
                k = i+3;
                if(((k+l) == N) && l!=3){
                    min_step = 2;
                    flag = 1;
                    break;
                }
            }
        }

        if(flag == 0){
            for(int l=1 ; l<4 ; l++){
                if(l==1){
                    int k = i+l;
                    k += 2;
                    if((k+3)==N){
                        min_step = 3;
                        break;
                    }
                    k = i+l;
                    k += 3;
                    if((k+2)==N){
                        min_step = 3;
                        break;
                    }
                }

                if(l==2){
                    int k = i+l;
                    k += 1;
                    if((k+3)==N){
                        min_step = 3;
                        break;
                    }
                    k = i+l;
                    k += 3;
                    if((k+1)==N){
                        min_step = 3;
                        break;
                    }
                }

                if(l==3){
                    int k = i+l;
                    k += 1;
                    if((k+2)==N){
                        min_step = 3;
                        break;
                    }
                    k = i+l;
                    k += 2;
                    if((k+1)==N){
                        min_step = 3;
                        break;
                    }
                }
            }       
        }
        cout<<min_step<<endl;
        T--;
    }
    return 0;
}