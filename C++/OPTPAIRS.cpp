#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int gcd(int a, int b){
    int GCD, x, i=1;
    if(a>b) x=b;
        else x=a;
        while(i<=x){
            if((a%i == 0) && (b%i == 0)){
                GCD = i;
                i++;
                continue;
            }
            i++;
        }
        return GCD;
}


int lcm(int n1 , int n2)
{
    int max;
    max = (n1 > n2) ? n1 : n2;

    do
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            return max;
            break;
        }
        else
            ++max;
    } while (true);
}

int main(){
    int T;
    cin>>T;
    while(T--){
        int n, min , count = 0;
        cin>>n;
        int ar[n-1] , j=1;
        for(int i=0 ; i<n-1 ; i++){
            ar[i] = lcm(j,n-j) + gcd(j,n-j) ;
            j++;
        }
        min = *min_element(ar, ar + n-1);
        for(int i=0 ; i<n-1 ; i++){
            if(ar[i] == min) count ++;
        }
        cout<<count<<endl;
    }
    return 0;
}



#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long count_ashish = 0;
        long long maximumele = 2;
        while (maximumele <= sqrt(n))
        {
            if (n % maximumele == 0)
            {
                if (n / maximumele == maximumele)
                {
                    count_ashish++;
                }
                else
                {
                    count_ashish = count_ashish + 2;
                }
            }
            maximumele++;
        }
        if (n % 2 == 0)
        {
            cout << count_ashish * 2 + 1 << endl;
        }
        else
        {
            cout << count_ashish * 2 + 2 << endl;
        }
    }

    return 0;
}