#include<iostream>
// #include <stack>

using namespace std;

class Stack{
    public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        arr=new int[size];
        this->size=size;
        top=-1;
    }

    //function
    void push(int data){
        //stack is avaible
        if(size - top > 1){
            top++;
            arr[top]=data;
        }
        //space is not aviavle
        else{
            cout<<"stack is over flow"<<endl;
        }
    }

    void pop(){
        if(top==-1){
            //stack is empty
            cout<<"stack is under flow"<<endl;
        }
        else{
            top--;
        }
        return ;
    }
    
    int getTop(){
        if(top==-1){
            cout<<"there is not element in stack"<<endl;
        }
        else{
            return arr[top];
        }
    }

    int getSize(){
        return top+1;
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    Stack s(10);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while(!s.isEmpty()){
        cout<<s.getTop()<<" ";
        s.pop();
    }
    return 0;
}