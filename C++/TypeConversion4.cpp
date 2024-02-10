
// Class To Class Conversion using Casting Operator 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Item {   // this class must be declare before the Product class otherwise function does not call
    private:
    int a ;
    int b;

    public :

    Item(){
        a=0; 
        b=0;
    }
    
    void setData(int x , int y){
        a=x;
        b=y;
    }

    void showData(){
        cout<<"a = "<<a<<", b = "<<b<<endl;
    }

    void setA(int x){
        a = x;
    }

    void setB(int y){
        b = y;
    }


};

class Product {  
    private :
    int m ;
    int n ; 
    
    public :

    Product (){
        m=0;
        n=0;
    }

    void get(int x, int y){
        m = x;
        n = y;
    }

    void show(){
        cout<<"m = "<<m<<", n = "<<n<<endl;
    }

    operator Item(){  //Casting  Operator Synatx 
        Item I;
        I.setA(m) ;
        I.setB(n) ;
        return I;
    }
};






int main(){
    Item I1 ;
    Product P1;

    I1.setData(10,20);

    P1.get(50,60);

    cout<<"Product Class :  ";
    P1.show();

    cout<<"Item Class :  ";
    I1.showData();

    I1 = P1 ;   

    cout<<"Product to Item Class :  ";
    I1.showData();

    return 0;
}