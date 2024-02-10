#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ifstream fin;
    fin.open("abc.txt");
    cout<<fin.tellg();
    cout<<"\n"<<(char)fin.get();
    cout<<(char)fin.get();
    cout<<"\n"<<fin.tellg();
    fin.seekg(6);   // by default it seek from begining.
    cout<<"\n"<<fin.tellg();
    cout<<"\n"<<(char)fin.get();
    cout<<"\n"<<fin.tellg();
    fin.seekg(-2,ios_base::end);    // it seek in negative direction by 2 from the end.
    cout<<"\n"<<fin.tellg();
    cout<<"\n"<<(char)fin.get();
    fin.seekg(-5,ios_base::cur);   // it seek in negative direction by 5 from current possition.
    cout<<"\n"<<fin.tellg();
    cout<<"\n"<<(char)fin.get();
    fin.seekg(11,ios_base::beg);   // it seek in positive direction by 11 from begining 
    cout<<"\n"<<fin.tellg();
    cout<<"\n"<<(char)fin.get();
    fin.close() ; // when we open in ifstream it is not necessory to write this line because we dont write in the file only read the file 
    return 0;

}