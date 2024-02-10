#include <iostream>
using namespace std;

struct Rect{
    int length;
    int breadth;
};

struct Rect * newRect(){
    Rect *R;
    R = new struct Rect;
    R->length = 15;
    R->breadth = 25;
    return R;
}

void setvalues(Rect *r){
    r->breadth = 100;
    r->length = 200;
}

void improve(Rect &r, int a, int b){
    r.length = a;
    r.breadth = b;
}

int main(){
    struct Rect r1={10,20};
    cout<<"Lenght = "<<r1.length<<endl<<"Breadth = "<<r1.breadth<<endl;
    struct Rect *r2; 
    r2 = newRect();
    cout<<"Lenght = "<<r2->length<<endl<<"Breadth = "<<r2->breadth<<endl;
    setvalues(&r1);
    cout<<"Lenght = "<<r1.length<<endl<<"Breadth = "<<r1.breadth<<endl;
    improve(r1,55,66);
    cout<<"Lenght = "<<r1.length<<endl<<"Breadth = "<<r1.breadth<<endl;
}