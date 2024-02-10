#include <iostream>
#include <map>
#include <stack>
#include <string>
using namespace std;

bool isOperator(char c)
{
    return (!isalpha(c) && !isdigit(c));
}

int getPriority(char c)
{
    if (c == '+' || c == '-')
    {
        return 1;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    else if (c == '^')
    {
        return 3;
    }
    else
    {
        return 0;
    }
}

string infixToPrefix(string infix)
{
    stack<char> operators;
    string ans;
    for (int i = infix.length() - 1; i >= 0; i--)
    {
        if (infix[i] == ')')
        {
            operators.push(infix[i]);
        }

        else if (!isOperator(infix[i]))
        {
            ans += infix[i];
        }
        else if (infix[i] == '(')
        {
            while (operators.top() != ')')
            {
                ans += operators.top();
                operators.pop();
            }
            operators.pop();
        }
        else
        {
            while (!operators.empty() && getPriority(infix[i]) <= getPriority(operators.top()))
            {
                ans += operators.top();
                operators.pop();
            }
            operators.push(infix[i]);
        }
    }

    while (!operators.empty())
    {
        ans += operators.top();
        operators.pop();
    }
    int i=0, j=ans.length()-1 ;
    while(i < j){
        char temp = ans[i];
        ans[i] = ans[j];
        ans[j] = temp;
        i++;
        j--;
    }

    return ans;
}

int main()
{
    string s = "(A-B/C)*(A/K-L)";
    cout << infixToPrefix(s);
    return 0;
}
