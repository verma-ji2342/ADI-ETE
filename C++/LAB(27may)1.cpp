#include <iostream>
using namespace std;

class A{
  protected :
    int roll;
    public:
        void getroll(){
            cout << "Enter Roll: ";
            cin >> roll;
        }
        void putroll(){
            cout << "Roll No. : " << roll;
        }
};

class B : public A {
    protected:
        int m_sub1, m_sub2;
    public: 
        void getmark(){
            getroll();
            cout << "Enter marks of two subjects: ";
            cin >> m_sub1 >> m_sub2;
        }
        void putmark(){
            cout << "\nMark 1: " << m_sub1;
            cout << "\nMark 2: " << m_sub2;
        }
};

class C: public A{
    int spt;
    public:
    
        void getspt(){
            cout << "\nEnter marks in spt: ";
            cin >> spt;
        }
        void total(){
            putroll();
            cout << "\nTotal Marks: " <<spt;
        }
};

int main(){
    C cc;
    cc.getspt();
    cc.total();
    B bb;
    bb.getroll();
    bb.putroll();
    bb.getmark();
    bb.putmark();
    return 0;
}