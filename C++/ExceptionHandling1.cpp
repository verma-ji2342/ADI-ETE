#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sub(int j, int k){
    cout<<"Inside function sub () \n";

    try {
        if(j == 0)
           throw j;
        else 
           cout<<"Substraction = "<<j-k<<endl;
    }

    catch (int) {
        cout<<"Caught null value \n";
        throw ;
    }
    cout<<" ** End of sub() ***\n\n";
}

int main(){
    cout<<"\n inside the function main () \n";
    
    try {
        sub(8,5);
        sub(0,8);
    }
    catch(int){
        cout<<"caught null inside main() \n";
    }

    cout<<"end of function main () \n";

    return 0;
    
}