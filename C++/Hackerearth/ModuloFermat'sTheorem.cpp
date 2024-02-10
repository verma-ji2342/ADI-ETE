#include <iostream>
using namespace std;

// Function to calculate (x^y) % p
long long power(long long x, long long y, long long p) {
    long long result = 1;
    x = x % p;
    
    while (y > 0) {
        if (y % 2 == 1) {
            result = (result * x) % p;
        }
        y = y / 2;
        x = (x * x) % p;
    }
    
    return result;
}

// Function to calculate the modular inverse of 'a' under modulo 'p' using Fermat's Little Theorem
long long modInverse(long long a, long long p) {
    return power(a, p - 2, p);
}

int main() {
    long long p;  // Replace with your prime number
    long long a;  // Replace with your integer 'a'
    
    cin >> p;
    cin >> a;
    
    if (a >= p) {
        cout << "a should be less than p." << endl;
    } else if (a == 0) {
        cout << "Result is 0 because a is 0." << endl;
    } else {
        long long result = (a * modInverse(a, p)) % p;
        cout << a << "^" << p << " ≡ " << a << " (mod " << p << ") => " << a << "^" << p << " ≡ " << result << " (mod " << p << ")" << endl;
    }
    return 0;
}
