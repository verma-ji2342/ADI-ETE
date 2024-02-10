#include <iostream>
using namespace std;

// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int n;
//         cin>>n;
//         int arr[n], a[n+1]={0};
//         for(int i=0 ; i<n ; i++){
//             cin>>arr[i];
//         }
//         for(int i=0 ; i<n ; i++){
//             a[arr[i]]++;
//         }
//         int c=0;
//         for(int i=1 ; i<n+1 ; i++){
//             if(a[i] == i){
//                 c += i;
//             }
//         }
//         if(c==n) cout<<"YES"<<endl;
//         else cout<<"NO"<<endl;
//     }    
//     return 0;
// }


int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        int n , c=0, min = 0, j;
        cin>>n;
        cin>>s;
        for(int i=0 ; i<n ; i++){
            if(s[i] == '0' && s[i+1] == '1'){
                min++;
            }
        }
        cout<<min<<endl;
    }
    return 0;
}

