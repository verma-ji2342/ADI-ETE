#include <iostream>
#include <cstdlib>
using namespace std;

// int main(){
//     for(int i=0 ; i<5 ; i++){
//         cout<<rand()%100<<" ";
//     }
//     return 0;
// }

int main(){
    int low = 10, high = 100;
    int range = high - low +1;
    for(int i=0 ; i<5 ; i++){
        cout<<(rand()%range)+low<<" ";
    }
    return 0;
}
