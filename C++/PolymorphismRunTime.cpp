 
// Concept Of Virtual Function
#include <iostream>
#include <cstring>
using namespace std;

class Vehicle {
	public :
		string color;

	
	virtual void print() {  //Late binding 
		cout << "Vehicle" << endl;
	}


};


class Car : public Vehicle {
	public :
		int numGears;



		void print() {
			cout << "Car" << endl;
		}


};

int main() {
	Vehicle v;

	Car c;

	v.print();

	c.print();


	Vehicle *v1 = new Vehicle;

	Vehicle *v2;
	v1 = &v;

	v2 = &c;

	v1 -> print();

	v2 -> print();

return 0;

}

