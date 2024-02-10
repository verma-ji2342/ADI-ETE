#include<iostream>
#include <cstring>
using namespace std;

class Student{
    int roll;
    char name[10];
    double fee;

    public:
    void getdata(int r, char * s, double f){
        roll = r;
        strcpy(name, s);
        fee = f;
    }
    void display(){
        cout<<endl<<roll<<" \t"<<name<<"\t"<<fee;
    }
};

int main(){
    Student s;
    char c[] = {'P','R','A','N','J','A','L','\0'};
    s.getdata(445,c,25.25);
    s.display();
    return 0;

}