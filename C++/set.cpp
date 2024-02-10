#include <iostream>
#include <set>
using namespace std;

int main(){
    cout<<"This is example of Set : \n";
    set<int>s;
    s.insert(10);
    s.insert(5);
    s.insert(20);
    s.insert(10);
    for(int x:s){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"This is an example of Multiset : \n";
    multiset<int>ms;
    ms.insert(10);
    ms.insert(20);
    ms.insert(10);
    ms.insert(5);
    ms.insert(50);
    ms.insert(10);

    for(auto i:ms){
        cout<<i<<" ";
    }
    cout<<endl;
    auto it = ms.equal_range(10);
    cout<<"10 Start from : "<<*it.first<<" to "<<*it.second<<endl;
    return 0;
}