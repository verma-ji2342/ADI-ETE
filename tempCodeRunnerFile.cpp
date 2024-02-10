        // int dp[n+1][k+1] = {0};
        
        // for(int i=1 ; i<=n ; i++){
        //     for(int j=1 ; j<=k ; j++){
        //         if(i == 1){
        //             dp[i][j] = j;
        //         }
        //         else if(j == 1){
        //             dp[i][j] = 1;
        //         }
        //         else{
        //             int mini = INT_MAX;
        //             for(int mj=j-1, pj=0 ; mj>=0 ; mj--, pj++){
        //                 int val1 = dp[i][mj];
        //                 int val2 = dp[i-1][pj];
        //                 int val = max(val1, val2);
        //                 mini = min(val, mini);
        //             }
        //             dp[i][j] = mini + 1;
        //         }
        //     }
        // }
        // return dp[n][k];