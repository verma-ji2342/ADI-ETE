#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void PrintStack(stack<int>) ;
void printstack(stack<int>) ; 

int main(){
    stack<int>S;

    if(S.empty()) cout<<"YES it is Empty\n";
    else cout<<"NO it is not Empty\n";

    cout<<"Size of stack: "<<S.size()<<endl;

    for (int i = 1 ; i < 6 ; i++ ){
        S.push(i*2) ; 
    }


    PrintStack(S);

    cout<<endl;

    printstack(S);

    cout<<endl;

    cout<<"SIZE OF STACK IS:  "<<S.size()<<"\n"; 

    S.pop();
    
    PrintStack(S);
    cout<<endl;

    cout<<"SIZE OF STACK IS:  "<<S.size()<<"\n"; 

    return 0;
}

void PrintStack(stack<int>ST){

    if(ST.empty())
    return ;

    int x = ST.top();

    ST.pop();

    cout<<x<<" ";

    // It will print According to the FIFO rule 
    // This program is based on recusion concept and call by recusively
    PrintStack(ST);


    ST.push(x); // pop elements back into the stack.
    //these element arrange in the order of recusrion execute

}

void printstack(stack<int> ST){

    if(ST.empty())
    return ;

    int x = ST.top();

    ST.pop();  // It will pop out the back element but the value store in the x.

    printstack(ST); // call the function before the print the element ...after the empty stack it will be start printing 
    // the element of stack in order to put into the stack.

    cout<<x<<" ";  // it will print according to FIFO rule

    ST.push(x); // pop elements back into the stack.
    //these element arrange in the order of recusrion execute

}