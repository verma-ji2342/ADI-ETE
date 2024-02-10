// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;


// int main(){
//     int T ;
//     cin>>T ;
//     while(T--){
//         string S, n;
//         cin>>S ;
//         int i = 0, sum = 0 ;

//         while(S[i] != '\0'){
//             if(isdigit(S[i])) {
//                 n += S[i];
//             }
//             i++ ;
//         }

//         int num = stoi(n);

//         while(num != 0){
//             int rem;
//             rem = num%10;
//             num /= 10;
//             sum += rem;
//         }

//         cout<<sum<<endl ;
//     }
//     return 0 ;
// }

//////////////////second method ///////////////////////////

//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{

    int T;
    cin >> T;

    while (T--)
    {
        string s;
        cin >> s;

        int sum = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (int(s[i]) >= 48 && int(s[i]) <= 57)
            {
                int num=int(s[i])-48;
                sum += num;
            }
        }
        cout << sum<<"\n";
    }

    return 0;
}