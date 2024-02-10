#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>allPer;


vector<int> bhaiEkNikalKeDe(int N, string s){
    int n = s.size();
    // int arr[n];
    vector<int> arr(n);
    int i = n-1;
    while(i >= 0){
        if(s[i] == 'D'){
            arr[i] = N;
            N++;
        }
        i--;
    }
    i=0;
    while(i < n){
        if(s[i] == 'I'){
            arr[i] = N;
            N++;
        }
        i++;
    }
    i=0;
    while(i < n){
        cout<<arr[i]<<" ";
        i++;
    }
    return arr;
}



void permute(vector<int>& a, int l, int r) 
{ 
    // Base case 
    if (l == r) 
        allPer.push_back(a);
        cout<<a.size();
    else { 
        // Permutations made 
        for (int i = l; i <= r; i++) {

            // Swapping done 
            swap(a[l], a[i]); 
  
            // Recursion called 
            permute(a, l + 1, r); 
  
            // backtrack 
            swap(a[l], a[i]); 
        } 
    } 
} 


void Helper(vector<vector<int>>& ans, string s)
{
    for(auto x : allPer){
        int i=1;
        int prev = x[0];
        while(i < x.size()){
            if(s[i] == 'I'){
                if(prev > x[i]){
                    continue;
                }
            }
            else{
                if(prev < x[i]){
                    continue;
                }
            }
            i++;
        }

        ans.push_back(x);
    }
}

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int>arr;
    arr = bhaiEkNikalKeDe(n, s);
    // cout<<allPer.size();
    permute(arr,0, arr.size()-1);
    vector<vector<int>>ans;
    // Helper(ans, s);
    return 0;
}