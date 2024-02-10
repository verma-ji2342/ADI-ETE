// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// void change_chr(char *ar, int n)
// {
//     char ch[256], k = 97;
//     for (int i = 122; i > 96; i--)
//     {
//         ch[k] = i;
//         k++;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         int as;
//         as = ar[i];
//         ar[i] = ch[as];
//     }
//     return;
// }

// int main()
// {
//     int T;
//     cin >> T;
//     while (T--)
//     {
//         int N;
//         cin >> N;
//         char s[N + 1];
//         cin >> s;

//         // Swaping with adjacent chharacters  

//         if (N % 2 == 0)
//         {
//             for (int i = 0; i < N; i = i + 2)
//             {
//                 char ch;
//                 ch = s[i];
//                 s[i] = s[i + 1];
//                 s[i + 1] = ch;
//             }
//         }
//         else
//         {
//             for (int i = 0; i < N - 1; i = i + 2)
//             {
//                 char ch;
//                 ch = s[i];
//                 s[i] = s[i + 1];
//                 s[i + 1] = ch;
//             }
//         }

//         // Encoding code 

//         char ch[256], k = 97;
//         for (int i = 122; i > 96; i--)
//         {
//             ch[k] = i;
//             k++;
//         }

//         for (int i = 0; i < N; i++)
//         {
//             int as;
//             as = s[i];
//             s[i] = ch[as];
//         }
//         cout<<s<<endl;
//     }
//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n, c;
        cin>>n>>c;
        cout<<n-c<<endl;
    }
    return 0;
}