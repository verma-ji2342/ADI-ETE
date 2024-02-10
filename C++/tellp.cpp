#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    char ch;
    ifstream fin;
    fin.open("abc.txt");
    int pos;
    pos = fin.tellg();
    cout<<pos<<"\n";
    fin>>ch;
    pos = fin.tellg();  //pointer shift by 1 unit because it read the one character.
    cout<<pos<<"\n";
    fin.close();
    return 0;
}