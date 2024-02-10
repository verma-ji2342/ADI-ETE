
// Vutual class is when you have to force the child class to run their function at run time.

#include <iostream>
using namespace std;

class Vehicle {
    public:
    string color;

    virtual void print() = 0 ;

};

class Car : public Vehicle {
    public :
    int numGear ; 

    void print(){
        cout<<"CAR"<<endl;
    }

};

int main(){
    Car C;

}