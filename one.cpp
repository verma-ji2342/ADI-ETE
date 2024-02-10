#include <iostream>
using namespace std;

int knapSack(int w, int wt[], int val[], int n)
{
    // Your code here
    int dp[n + 1][w + 1];

    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 0;
    }

    for (int i = 0; i <= w; i++)
    {
        dp[0][i] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            if (wt[i - 1] <= j)
            {
                dp[i][j] = max(val[i - 1] + dp[i - 1][j - wt[i - 1]], dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[n][w];
}



int main()
{
    int n, w;
    cin>>n>>w;
    int wt[n];
    int val[n];
    for(int i=0 ; i<n ; i++){
        cin>>wt[i]>>val[i];
    }

    cout<<knapSack(w, wt, val, n);
    return 0;
}