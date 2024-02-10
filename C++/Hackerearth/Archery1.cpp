#include <iostream>
using namespace std;

long long int gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long int ans;
        if(n == 1){
            cout<<arr[0]<<endl;
        }
        else{
            ans = (arr[0]*arr[1])/(gcd(arr[0],arr[1]));
        }
        for (int i = 2; i < n; i++)
        {
            ans = (ans*arr[i])/(gcd(ans, arr[i]));
        }
        cout << ans << endl;
    }
    return 0;
}