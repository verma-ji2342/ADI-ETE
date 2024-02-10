#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n, k;
        cin>>n>>k;
        int ar[n], a[n], d=1, j=0;
        while(j<n){
            for(int k=j ; (k<j+5)&&(k<n) ; k++ ){
                ar[k] = d ;
                a[k] = d ;
            }
            d++;
            j += 5;
        }
        d=1;
        j=0;
        while(j<n){
            int i=0;
            while((i < 5) && (j<n)){
                if(k == j+1){
                    ar[j] = -1 ;
                    j++;
                }
                else {
                    ar[j] = d;
                    j++;
                    i++;
                }
            }
            d++;
        }
        // for(int i=0 ; i<n ; i++){
        //     cout<<ar[i]<<a[i]<<" ";
        // }
        int emp=0;

        for(int i=0 ; i<n ; i++){
            if(ar[i] == -1) continue;
            if(ar[i] != a[i]) emp++;
        }
        cout<<emp<<endl;

    }
    return 0;
}