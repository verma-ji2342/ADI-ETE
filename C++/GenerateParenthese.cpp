#include <iostream>
#include <vector>
using namespace std;

void backtrack(vector<string>& result, string& current, int left, int right, int n) {
    if (current.length() == 2 * n) {
        result.push_back(current);
        return;
    }
    
    if (left < n) {
        current.push_back('(');
        backtrack(result, current, left + 1, right, n);
        current.pop_back();
    }
    
    if (right < left) {
        current.push_back(')');
        backtrack(result, current, left, right + 1, n);
        current.pop_back();
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> result;
    string current;
    backtrack(result, current, 0, 0, n);
    return result;
}

int main() {
    int n = 3;
    vector<string> validParentheses = generateParenthesis(n);
    for (const string& s : validParentheses) {
        cout << s << endl;
    }
    return 0;
}
