#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    ofstream fout ;
    char ch;
    fout.open("abc.txt",ios::app);
    int pos;
    pos = fout.tellp();
    cout<<pos<<"\n";
    fout<<" UiD is 2110992342";
    pos = fout.tellp();
    cout<<pos<<"\n";
    fout.close();
    return 0;
}