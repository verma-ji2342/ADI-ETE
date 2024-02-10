#include <bits/stdc++.h>
using namespace std;


int CountWays(string str)
{
    // Code here
    int dp[str.size()];
    dp[0] = 1;
    int mod = 1000000000 + 7;

    for (int i = 1; i < str.size(); i++)
    {
        if (str[i] == '0' && str[i - 1] == '0')
        {
            dp[i] = 0;
        }
        else if (str[i] == '0' && str[i - 1] != '0')
        {
            if (str[i - 1] == '1' || str[i - 1] == '2')
                dp[i] = i > 1 ? dp[i - 2] : 1;
        }
        else if (str[i] != '0' && str[i - 1] == '0')
        {
            dp[i] = dp[i - 1];
        }
        else
        {
            if ((str.substr(i - 1, i + 1)) <= "26")
            {
                dp[i] = i > 1 ? (dp[i - 2] + dp[i - 1]) % mod : dp[i - 1] + 1;
            }
            else
                dp[i] = dp[i - 1];
        }
    }
    return dp[str.size() - 1] % mod;
}

    int main()
    {
        int n;
        cin >> n;
        string s = to_string(n);
        // cout<<;
        cout << CountWays(s);
    }