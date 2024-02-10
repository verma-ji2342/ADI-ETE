#include <iostream>
using namespace std;

void fun(int x, int y){
    int a, b;
    a = 100*x;
    b = 10*y;
    if(a==b){
        cout<<"Cloth"<<endl;
    }
    else if(a<b){
        cout<<"Disposable"<<endl;
    }
    else {
        cout<<"Cloth"<<endl;
    }
}
int main() {
	// your code goes here
	int N, X, Y;
	cin>>N;
	for(;N>0;N--){
	    cin>>X>>Y;
	    fun(X,Y);
	}
	return 0;
}