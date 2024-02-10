#include <bits/stdc++.h>
using namespace std;

class student {
    // static int r = 1;
    public: 
        int roll;
        string name;
    
    student(int r, string name){
        this->name = name;
        this->roll = r;
        r++;
    }
};

bool compareInterval(student s1, student s2) { 
    return (s1.roll > s2.roll); 
}

int main(){
    vector<student>arr;
    int n;
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        string name;
        cin>>name;
        student s(i, name);
        arr.push_back(s); 
    }
    int newS;
    cin>>newS;
    bool pre = false;
    sort(arr.begin(), arr.end(), compareInterval);

    for(student x : arr){
        cout<<x.roll<<" "<<x.name<<endl;
        if(x.roll){
            pre = true;
        }
    }
    (pre == true)? cout<<"present" : cout<<"not present";
    return 0;
}