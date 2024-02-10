#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void check(int k) throw (int, double) {
    if(k == 1) throw k;
    else 
      if (k == 2) throw "hey" ;
    else 
      if (k == -2) throw 1.0 ; 
    cout<<"\n End of function check() "; 
}

int main(){
    try {
        // cout<<"k == 1 \n";
        // check(1);

        cout<<"k == 2 \n" ;
        check(2);               // if you execute this line only the program will be terminate cause of specifying exception

        cout<<"k == -2 \n" ;
        check(-2);


    }

    catch ( char g ){
        cout<<"Caught a charcater exception \n" ;
    }

    catch(int j){
        cout<<"caught a integer exception \n" ;
    }

    catch(double s){
        cout<<"caught a double exception \n" ;
    }

    cout<<"\nEnd of main () " ;
    return 0;
}