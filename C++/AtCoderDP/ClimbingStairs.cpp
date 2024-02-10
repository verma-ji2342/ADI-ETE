#include <iostream>
#include <vector>
using namespace std;

vector<vector<long long>> multiply(const vector<vector<long long>>& A, const vector<vector<long long>>& B) {
    int n = A.size();
    vector<vector<long long>> result(n, vector<long long>(n, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return result;
}
vector<vector<long long>> matrix_pow(const vector<vector<long long>>& A, int exp) {
    int n = A.size();
    if (exp == 1) {
        return A;
    } else if (exp % 2 == 0) {
        vector<vector<long long>> half_pow = matrix_pow(A, exp / 2);
        return multiply(half_pow, half_pow);
    } else {
        vector<vector<long long>> half_pow = matrix_pow(A, (exp - 1) / 2);
        return multiply(multiply(half_pow, half_pow), A);
    }
}

// Function to calculate the nth Fibonacci number using matrix exponentiation
long long climbStairs(int n) {
    if (n <= 2) {
        return n;
    }

    vector<vector<long long>> base = {{1, 1}, {1, 0}};
    vector<vector<long long>> result = matrix_pow(base, n - 1);

    return result[0][0];
}

int main() {
    int n = 5; // Change this to the number of stairs you want to climb
    long long ways = climbStairs(n);
    cout << "Number of ways to climb " << n << " stairs: " << ways << endl;

    return 0;
}
