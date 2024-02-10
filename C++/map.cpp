#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int,int>mp;
    // map<int,int,greater<int>>mp;  // it will arrange in decreasing order
    mp.insert({10,200});
    mp[10] = 300;
    cout<<mp.size()<<endl;
    mp.at(10) = 200;
    cout<<mp.size()<<endl;

    mp.insert({3,62});
    mp.insert({4,23});
    mp.insert({5,68});
    mp.insert({2,50});
    mp.insert({7,325});
    cout<<"Size of map is "<<mp.size()<<endl;
    for (auto i = mp.begin(); i != mp.end(); i++)
        cout << i->first << "\t" << i->second << endl;
    // mp.clear();
    mp.erase(2);
    cout<<mp.size()<<endl;
    auto i = mp.find(5);
    for(auto it = i ; it != mp.end() ; it++){
        cout << it->first << "\t" << it->second << endl;
    }
    return 0;
}