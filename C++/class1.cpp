#include <iostream>
#include <sstream>
#include <cstring>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student {
    int age, stand;
    string firstN, lastN;
    
    public:
    void set_age(int x){
        age = x;
    }
    void set_standard(int x){
        stand = x;
    }
    void set_first_name(string &x){
        firstN = x;
    }
    void set_last_name(string &x){
        lastN = x;
    }
    int get_age(){
        return age;
    }
    int get_standard(){
        return stand;
    }
    string get_first_name(){
        return firstN;
    }
    string get_last_name(){
        return lastN;
    }
    string to_string(){
        stringstream as, ss;
        as<<age;
        ss<<stand;
        string a, s;
        as>>a;
        ss>>s;
        return (a+','+firstN+','+lastN+','+s);
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}