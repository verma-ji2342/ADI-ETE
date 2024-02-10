#include<iostream>
#include<set>
using namespace std;


int main(){

// initializing a set
set<int> s;


int arr[] = {1,2,3,4,5,6,5};


// inserting elements into a set


for(int i=0; i<7; i++){
    s.insert(arr[i]);
}

// creating an iterator to traverse through the set

set<int>::iterator it;

for(it=s.begin(); it!=s.end(); it++){
    cout << *it << " ";
}

cout<<endl;

// finding elements in set

cout << *s.find(5) << endl;

cout << s.count(5)<<endl;



for(it=s.begin(); it!=s.end(); it++){
    cout << *it <<" ";
}

cout<< endl;


s.erase(s.begin());

s.insert(8);
  cout<<"Print after removing first element in the set  :  ";

for(it=s.begin(); it!=s.end(); it++){
    cout << *it <<" ";
}

cout<< endl;


if(s.find(7) == s.end()){
    cout << "Element not found" << endl;
} 
else {
    cout << "Element found" << endl;
}
}

s.clear() ; 
 
cout<<"\nThe size of set is : "<<s.size<<"\n";
