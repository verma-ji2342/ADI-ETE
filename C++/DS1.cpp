#include <iostream>
using namespace std;

// int fact(int n) ;  //function declaration 

// int main(){
//     int x;
//     cin>>x;
//     cout<<fact(x);
//     return 0;
// }

// int fact(int n){    //function defination 
//     int r=1;
//     for(int i=1 ; i<=n ; i++){
//         r *= i;
//     }
//     return r;
// }


// class Rect {
//     int l;
//     int b;

//     public:

//     Rect(int x, int y){
//         l=x;
//         b=y;
//     }
//     Rect(){
//         l=0;
//         b=0;
//     }

//     void area(){
//         cout<<l*b<<endl;
//     }
// };

// int main(){
//     int L, B;
//     cin>>L>>B;
//     Rect R, R1(L,B);
//     R.area();
//     R1.area();
//     return 0;
// }

int main(){
    int n;
    cout<<"Enter the number of rows less than 26\n";
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        char l = 'A';
        for(int j=i ; j<n ; j++){
            cout<<" ";
        }
        for(int k=0 ; k<i ; k++){
            cout<<l;
            l++;
        }
        l--;
        l--;
        for(int m=1 ; m<i ; m++){
            cout<<l;
            l--;
        }
        cout<<endl;
    }
    return 0;
}


// int SI(int p ,int r=10, int t=3){
//     return r*p*t;
// }

// int main(){
//     int r, p, t;
//     cout<<"Enter the rate, principle, time respectively: \n";
//     cin>>r>>p>>t;
//     cout<<"SIMPLE INTEREST : " << SI(p)<<endl;
//     cout<<"SIMPLE INTEREST : " << SI(r,p,t)<<endl;
//     return 0;
// }


// class Student{
//     int age;
//     string name;
//     public:
//     Student(){
//         age = 00;
//         name = "Null";
//     }
//     void set_age(int x){
//         age = x;
//     }
//     void set_name(string x){
//         name = x;
//     }
//     void show_data(){
//         cout<<"Name of student is : "<<name<<endl;
//         cout<<"age of student is : "<<age<<endl;
//     }
//     Student(Student const &s){
//         this->age = s.age;
//         this->name = s.name;
//     }
// };

// int main(){
//     Student s1, s2;
//     s1.set_age(18);
//     s2.set_age(19);
//     s1.set_name("Pranjal");
//     s2.set_name("Shahrukh");
//     s1.show_data();
//     s2.show_data();
//     Student s3(s1);
//     s3.show_data();
//     return 0;
// }


// int main(){
//     int x;
//     cin>>x;
//     int *s;
//     s = &x;
//     cout<<*s<<endl;
//     int **y;
//     *y = s;
//     cout<<**y<<endl;
//     **y = 10;
//     cout<<x<<endl;
//     return 0;
// }