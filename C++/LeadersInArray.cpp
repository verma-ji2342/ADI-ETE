//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> v;
        map<int, int> arr;
        int m=0, t=a[0], i=1, j=0;
        while(j<n){
            if(t>=a[i++] && i<n){
                arr[t] = 1;
                continue;
            }
            else if(t<a[i] && i<n) {
                arr[t] = 0;
                j++;
                t = a[j];
                i=j+1;
            }
            else {
                j++;
                t = a[j];
                i = j+1;
                arr[t] = 1;
            }
        }
        for( map<int,int>::iterator ii=arr.begin(); ii!=arr.end(); ++ii){
            if((*ii).second == 1) v.push_back((*ii).first);
        }
        return v;
    }
};

//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}

// } Driver Code Ends