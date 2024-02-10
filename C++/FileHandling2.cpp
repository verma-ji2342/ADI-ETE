#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

int main(){
    ifstream fin;
    char ch;
    fin.open("MyFile.dat");
    ch = fin.get() ;       //fin>>ch;
    while(!fin.eof()){
        cout<<ch;
        ch = fin.get() ;    //fin>>ch;
    }
    fin.close();
    getch();
}

// if you using [fin>>ch] then you will not get spaces and line break in your file content beacuse [>>] this overloading operator 
//does not read the tab, spaces , next line character that why this will happen

// for getting proper output with data separators use [ch = fin.get()] it will read all the characters.