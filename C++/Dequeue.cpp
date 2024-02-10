#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printdeque(deque<int>);

int main(){
    deque<int>Dq;
    
    if(Dq.empty()) cout<<"YES its empty deque\n";
    else cout<<"NO itsn't empty bro\n";

    for(int i=1 ; i<6 ; i++){
        if(i%2 == 0){
            Dq.push_back(i*3);
        }

        else {
            Dq.push_front(i*3);
        }
    }

    printdeque(Dq);
    cout<<endl;

    Dq.push_back(900);
    Dq.push_front(900);

    printdeque(Dq);
    cout<<endl;

    cout<<"Size of Dequeue is : "<<Dq.size()<<endl;

    Dq.pop_back();
    Dq.pop_front();

    printdeque(Dq);


    return 0;

}



void printdeque(deque <int> D){

    if(D.empty())
    return ;

    int x = D.back();

    D.pop_back();  // It will pop out the back element but the value store in the x.

    printdeque(D); // call the function before the print the element ...after the empty Dequeue it will be start printing 
    // the element of Dequeue in order to put into the Dequeue.

    cout<<x<<" ";  // it will print according to FIFO rule

    // D.push_back(D); // pop elements back into the Dequeue.
    //these element arrange in the order of recusrion execute

}