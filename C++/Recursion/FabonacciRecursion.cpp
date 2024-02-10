#include <iostream>
using namespace std;

// Program to find the nth term of fabonacci series :


// int fib(int n) {
// 	if (n == 0) {
// 		return 0;
// 	}

// 	if (n == 1) {
// 		return 1;
// 	}

// 	int smallOutput1 = fib(n - 1);
// 	int smallOutput2 = fib(n - 2);
// 	return smallOutput1 + smallOutput2;
// }
int F[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1} ;

int fab(int n){
    if(n<=1) {
        F[n] = n;
        return n;
    }
    else {
        if(F[n-2] == -1) F[n-2] = fab(n-2);
        if(F[n-1] == -1) F[n-1] = fab(n-1);
        return F[n-2] + F[n-1];
    }
}


int main() {
	cout << fab(3) << endl;
}
