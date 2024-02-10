#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Student {
    private:
    int rollno ; 
    char name[20];
    class Address {
        private:
        int houseno;
        char street[20];
        char city[20];
        char state[20];
        char pincode[7];

        public:

        void setAddress(int h, char *s, char *c, char *st, char *pin){
            houseno = h;
            strcpy(street,s);
            strcpy(city,c);
            strcpy(state,st);
            strcpy(pincode,pin);
        }

        void showaddress(){
            cout<<"house no. : "<<houseno<<endl;
            cout<<"street : "<<street<<endl;
            cout<<"city : "<<city<<endl;
            cout<<"state : "<<state<<endl;
            cout<<"pin code : "<<pincode<<endl;
        }
        
    };

    Address add;

    public:
    void setrollno(int r){
        rollno = r;
    }
    void setname(char *n){
        strcpy(name,n);
    }
    void setAddress(int h, char *s, char *c, char *st, char *p){
        add.setAddress(h,s,c,st,p);
    }


    void showStudent(){
        cout<<"student name : "<<name<<endl;
        cout<<"roll no. : "<<rollno<<endl;
        add.showaddress();
    }
};

int main(){
    char N[20], street[20], city[20], state[20], pin[7];
    int R, h;
    cout<<"-: STUDENT INFORMATION :-"<<endl;
    cout<<"Enter the Name of Student : ";
    cin.getline(N,20);
    cout<<"\nEnter the Roll no : ";
    cin>>R;
    cout<<"\nEnter the House no. : ";
    cin>>h;
    cout<<"\nEnter the street : ";
    cin>>street;
    cout<<"\nEnter the city : ";
    cin>>city;
    cout<<"\nEnter the locall pincode : ";
    cin>>pin;
    cout<<"\nEnter the state : ";
    cin>>state;
    cout<<R<<" "<<N<<" "<<street<<" "<<city<<" "<<h<<" "<<pin<<" "<<state<<endl;
    Student s1;
    s1.setrollno(R);
    s1.setname(N);
    s1.setAddress(h,street,city,state,pin);
    s1.showStudent();
    return 0;
}