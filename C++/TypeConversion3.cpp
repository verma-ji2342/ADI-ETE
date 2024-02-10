
// Class To Class Conversion using Constructor
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Product {  // This class must be declare before the item otherwise function doesnot call properly 
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

    int getM (){
        return m;
    }

    int getN (){
        return n;
    }
};


class Item {
    private:
    int a ;
    int b;

    public :

    Item(){
        a=0; 
        b=0;
    }

    Item(Product P){
        a = P.getM() ;
        b = P.getN() ;
    }
    
    void setData(int x , int y){
        a=x;
        b=y;
    }

    void showData(){
        cout<<"a = "<<a<<", b = "<<b<<endl;
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

    I1 = P1 ;  // we doing Conversion using Constructor making in Item Class. 

    cout<<"Product to Item Class :  ";
    I1.showData();

    return 0;
}