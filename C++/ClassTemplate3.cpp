#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

template<class X> // using templete in class

// You can replace all int data type by X so that it will work for all data type 
// This is the final code 


 class ArrayList {
    private:
    struct ControlBlock {
        int capacity;
        X *arr_ptr;
    };

    ControlBlock *s ;
    public :
    ArrayList(int capacity){
        s=new ControlBlock ;
        s->capacity = capacity ; 
        s->arr_ptr = new X[s->capacity] ;
    }

    void addElement (int index , X data){
        if(index>=0 && index<=s->capacity-1)
        s->arr_ptr[index] = data ;
        else
        cout<<"\nArray index is not valid" ;
    }

    void viewElement (int index, X & data ){
        if(index>=0 && index<=s->capacity-1){
            data = s->arr_ptr[index];
        }
        else{
            cout<<"\nArray index is not valid";
        }
    }

    void viewList (){
        int i;
        for(i=0 ; i<s->capacity ; i++){
            cout<<" "<<s->arr_ptr[i];
        }
    }
    
};


int main(){
    float data;
    ArrayList <float> list1(4);   // it will throw an error if we use >>>> ArrayList <float> list1(4.2)
    list1.addElement(0,32.1);
    list1.addElement(1,42.1);
    list1.addElement(2,52.1);
    list1.addElement(3,62.1);
    list1.viewElement(0,data); 
    list1.viewList();
    cout<<endl;
    cout<<"Value of first element in the array is: "<<data;
    return 0;
}