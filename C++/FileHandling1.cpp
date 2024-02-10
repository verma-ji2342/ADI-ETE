#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    ofstream fout;
    fout.open("MyFile.dat");  // this will create the file, if file is already is existing then it will open in the RAM
    fout<<"Hello this is Pranjal Verma";  //It will write in the file 
    fout.close();  // Close the file from RAM. ...After this statement your file will save in Hard drive
}