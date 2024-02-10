#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>arr ;
    if(arr.empty()) cout<<"YES array is empty\n";
    else cout<<"NOT empty\n";

    vector<int>a(3);

    a[0] = 1 ; 
    a[1] = 2 ; 
    a[2] = 3 ;

    for (int i=0 ; i<3 ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<"THIS IS FRONT ELEMENT OF ARRAY:  "<<a.front()<<endl;
    cout<<"THIS IS BACK ELEMENT OF ARRAY:  "<<a.back()<<endl;

    cout<<"PUSH ELEMENT 5 AT BACK\n";

    a.push_back(5);
    for(int i = 0 ; i<4 ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<"PoP ELEMENT FROM BACK\n";

    a.pop_back();

    for (int i=0 ; i<3 ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    a.push_back(6);

    a.clear();

    cout<<a.empty()<<endl;


    for (int i=0 ; i<3 ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}