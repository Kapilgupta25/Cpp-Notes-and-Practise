
// #include<bits/stdc++.h>
// using namespace std;

// const int MOD=1e9+7;

// int countWays(int n, vector<vector<char>> &grid, vector<vector<int>> &dp, int r, int c){
//     if(r<=0 || c<=0) return 0;
//     if(grid[r][c]=='*') return 0;
//     if(r==1 && c==1) return 1;

//     if(dp[r][c]!=0) return dp[r][c];
    
//     dp[r][c]=(dp[r][c]+countWays(n, grid, dp, r-1, c)+countWays(n, grid, dp, r, c-1))%MOD;

//     return dp[r][c]%MOD;
// }

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin>>n;

//     vector<vector<char>> grid(n+1, vector<char>(n+1));

//     for(int i=1; i<=n; i++)
//         for(int j=1; j<=n; j++) cin>>grid[i][j];

    
//     vector<vector<int>> dp(n+1, vector<int>(n+1, 0));

//     cout<<countWays(n, grid, dp, n, n)<<endl;

//     return 0;
// }


// // tabulation


#include<bits/stdc++.h>
using namespace std;

const int MOD=1e9+7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<vector<char>> grid(n+1, vector<char>(n+1));

    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++) cin>>grid[i][j];

    
    vector<vector<int>> dp(n+1, vector<int>(n+1, 0));

    if(grid[1][1]!='*') dp[1][1]=1;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==1 && j==1) continue;

            // cell is trap thus no path
            if(grid[i][j]=='*'){
                dp[i][j]=0;
                continue;
            }

            // path from above(i-1, j)
            if(i>1 && grid[i-1][j]!='*'){
                dp[i][j]=(dp[i][j]+dp[i-1][j])%MOD;
            }

            // path from left(i, j-1)
            if(j>1 && grid[i][j-1]!='*'){
                dp[i][j]=(dp[i][j]+dp[i][j-1])%MOD;
            }
        }
    }

    cout<<dp[n][n]<<endl;

    return 0;
}


