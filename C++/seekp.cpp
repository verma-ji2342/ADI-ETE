#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream fout;
    fout.open("abc.txt",ios::ate | ios::app);
    cout<<fout.tellp()<<endl;
    fout.seekp(2,ios_base::beg);  // write from the end
    cout<<fout.tellp()<<endl;  
    fout<<" and my uid is 2110992342";
    cout<<fout.tellp()<<endl;
    fout.close();
    return 0;

}