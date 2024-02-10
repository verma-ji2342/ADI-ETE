#include <iostream>
#include <bits/stdc++.h>
#include <queue>
#include <numeric>
using namespace std;

// void precal(){

// }

auto cmp = [](int a, int b){
    return (a%5 > b%2);
};

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }

    //Max-heap

    priority_queue<int>pq_max;

    //Min-heap
    
    priority_queue<int,vector<int>,greater<int>>pq_min;

    //Priority Queue with comparator function

    priority_queue<int,vector<int>,decltype(cmp)>pq_cmp(cmp);

    for (int i=0 ; i<n ; i++){
        pq_max.push(a[i]);
        pq_min.push(a[i]);
        pq_cmp.push(a[i]);
    }
    
    cout<<"SIZE:  "<<pq_max.size()<<"\n";

    cout<<"MAX-HEAP :  \n";
    while(!pq_max.empty()){
        cout<<pq_max.top()<<" ";
        pq_max.pop();
    }

    cout<<"\n";

    cout<<"MIN-HEAP :  \n";
    while(!pq_min.empty()){
        cout<<pq_min.top()<<" ";
        pq_min.pop();
    }

    cout<<"\n";

    cout<<"COMPARATOR :  \n";
    while(!pq_cmp.empty()){
        cout<<pq_cmp.top()<<" ";
        pq_cmp.pop();
    }

    cout<<"\n";

    return 0;
}

