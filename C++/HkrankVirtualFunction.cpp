#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person {
    public: 
    string name;
    int age;
    virtual void getdata(){
        cin>>this->name>>this->age;
    }
    virtual void putdata(){
        cout<<this->name<<" "<<this->age<<endl;
    }
};

class Professor : public Person {
    public:
    int cur_id;
    static int id1;
    int publication;
    Professor(){
        this->cur_id = ++id1;
    }
    void getdata(){
        cin>>this->name>>this->age>>this->publication;
    }
    void putdata(){
        cout<<this->name<<" "<<this->age<<" "<<this->publication<<" "<<this->cur_id<<endl;
    }
    
};
int Professor::id1 = 0;

class Student : public Person{
    public:
    int marks[6];
    int cur_id;
    static int id2;
    Student(){
        cur_id = ++id2;
    }
    void getdata(){
        cin>>this->name>>this->age;
        for(int i=0 ; i<6 ; i++){
            cin>>this->marks[i];
        }
    }
    void putdata(){
        int s=0;
        for(int i=0 ; i<6 ; i++){
            s += marks[i];
        }
        cout<<this->name<<" "<<this->age<<" "<<s<<" "<<this->cur_id<<endl;
    }
};
int Student::id2 = 0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
