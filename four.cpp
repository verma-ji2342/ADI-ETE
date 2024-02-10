#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int solve(vector<vector<int>> &matrix){
    int n = matrix.size();
    int m = matrix[0].size();

    int ans = matrix[0][0], i=0, j=0;
    while(true){
        if(i==n-1 && j==m-1){
            return ans;
        }
        else if(i==n-1){
            ans += matrix[i][j+1];
            j++;
        }
        else if(j==m-1){
            ans += matrix[i+1][j];
            i++;
        }
        else{
            if(matrix[i][j+1] > matrix[i+1][j]){
                ans += matrix[i][j+1];
                j++;
            }
            else{
                ans += matrix[i+1][j];
                i++;
            }
        }
    }
}

int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>> matrix(n, vector<int>(m));

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cin>>matrix[i][j];
        }
    }

    cout<<solve(matrix);
    return 0;
}