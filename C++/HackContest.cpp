#include <iostream>
#include <map>
using namespace std;

map <string, string> attribute;
void create (int &n, string tag) {
    if(!n) return ;
    string line, tag1, attr, val;
    getline(cin, line);
    int i;
    i=1;
    if(line[i] == '\n'){
        while(line[i] != '>') i++;
        if(tag.size()>(i-2)) tag1 = tag.substr(0,tag.size()-i-1);
        else tag = "";
    }
    else {
        while(line[i]!=' ' && line[i]!='>') i++;
        tag1 = line.substr(1,i-1);
        if(tag != "") tag1  =tag + '.' +tag1;
        int j;
        while(line[i]!='>') {
            j = ++i;
            while(line[i] != ' ') i++;
            attr = line.substr(j,i-j);
            while(line[i] != '\"') i++;
            j = ++i;
            while(line[i] !='\"') i++;
            val = line.substr(j,i-j);
            i+=1;
            
            attribute[tag1 + "~" + attr] = val;
        }
    }
    create(--n, tag1);
}



int main(){
    int n, q;
    cin>>n>>q;
    cin.ignore();
    create(n,"");
    string attr, value;
    while(q--){
        getline(cin,attr);
        value = attribute[attr];
        if(value=="") value = "Not Found!";
        cout<<value<<endl;
    }
    return 0;
}