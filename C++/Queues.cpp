#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void PrintQueue(queue<int>);
void printqueue(queue<int>);
int main(){

    queue<int>Q;

    (Q.empty())?cout<<"YES its empty\n": cout<<"NO it isn't Empty\n" ;
    cout<<"SIZE of QUEUE IS : "<<Q.size()<<endl;

    for(int i=1 ; i<6 ; i++){
        Q.push(i*10);
    }

    PrintQueue(Q);
    cout<<endl;
    printqueue(Q);
    cout<<endl;

    cout<<"Back element of Queue is: "<<Q.back()<<endl;

    Q.pop();
    
    PrintQueue(Q);

    cout<<endl; 


    while(!Q.empty()){
        int x = Q.front();
        cout<<x<<" "<<Q.size()<<endl;
        Q.pop();
    }

    return 0;
}

void PrintQueue(queue<int>Qu){

    if(Qu.empty())
    return ;

    int x = Qu.front();

    Qu.pop();

    cout<<x<<" ";

    // It will print According to the FIFO rule 
    // This program is based on recusion concept and call by recusively
    PrintQueue(Qu);


    Qu.push(x); // pop elements back into the QUEUE.
    //these element arrange in the order of recusrion execute

}

void printqueue(queue<int> Qu){

    if(Qu.empty())
    return ;

    int x = Qu.front();

    Qu.pop();  // It will pop out the back element but the value store in the x.

    printqueue(Qu); // call the function before the print the element ...after the empty Queue it will be start printing 
    // the element of QUEUE in order to put into the QUEUE.

    cout<<x<<" ";  // it will print according to FIFO rule

    Qu.push(x); // pop elements back into the QUEUE.
    //these element arrange in the order of recusrion execute

}