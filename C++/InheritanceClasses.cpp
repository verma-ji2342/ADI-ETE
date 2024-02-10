#include <iostream>
#include <cstring>
using namespace std;

class Teacher {
	public : 
		string name;
		string age;

		void print() {
			cout << "Teacher" << endl;
		}
};

class Student {
	public :

		string name;

		void print() {
			cout << "Student " << endl;
		}
};


class TA : public Teacher, public Student {

	public :
		// void print() {
		// 	cout << "TA " << endl;
		// }
};





int main() {
	TA a;

	a.Student :: print();

	// a.print();
	

	a.Teacher :: name = "abcd";
	cout<<a.Teacher::name<<endl;
	a.Student::name = "Pranjal Verma";
	cout<<a.Student::name<<endl;  // If the function and data memeber were not declare in the objects class, call these stuff in such way.
	return 0;                     // It must be declare in the public section and classes inherite by publically
}