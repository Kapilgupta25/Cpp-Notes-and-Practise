
// #include<bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// const int MOD=1e9+7;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
 
//     int n,k;
//     cin>>n>>k;

//     vector<int> candies(n+1);
//     for(int i=1; i<=n; i++) cin>>candies[i];

//     // dp[i][j] tells the no. of ways to distributes the "j" candies in "0-i" students
//     vector<vector<int>> dp(n+1, vector<int>(k+1, 0));
//     dp[0][0]=1;

//     for(int i=1; i<=n; i++){
//         // comnpute prefix sum for previous row
//         vector<int> prefixSum(k+2, 0);
//         for(int j=0; j<=k; j++){
//             prefixSum[j+1]=(prefixSum[j]+dp[i-1][j])%MOD;
//         }

//         for(int j=0; j<=k; j++){
//             int max_k=min(candies[i], j);
//             // dp[i][j] denotes the sum(dp[i-1][j-k] for k from 0 to max_k)
//             // which is prefix[j+1]-prefix[j-max_k]
//             int left=max(0, j-max_k);
//             dp[i][j]=(prefixSum[j+1]-prefixSum[left]+MOD)%MOD;
//         }
//     }

//     cout<<dp[n][k]<<endl;

//     return 0;
// }


// // Time: O(n*k) we use prefixSum to optimize the computation
// // Space: O(n*k)



// space Optimization : Rolling array 


#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD=1e9+7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n,k;
    cin>>n>>k;

    vector<int> candies(n+1);
    for(int i=1; i<=n; i++) cin>>candies[i];

    // dp[j] tells the no. of ways to distributes the "j" candies in "0-i" students
    vector<int> dp(k+1, 0);
    dp[0]=1;

    for(int i=1; i<=n; i++){
        // comnpute prefix sum for previous row
        vector<int> prefixSum(k+2, 0);
        for(int j=0; j<=k; j++){
            prefixSum[j+1]=(prefixSum[j]+dp[j])%MOD;
        }

        for(int j=0; j<=k; j++){
            int max_k=min(candies[i], j);
            // dp[j] denotes the sum(dp[i-1][j-k] for k from 0 to max_k)
            // which is prefix[j+1]-prefix[j-max_k]
            int left=max(0, j-max_k);
            dp[j]=(prefixSum[j+1]-prefixSum[left]+MOD)%MOD;
        }
    }

    cout<<dp[k]<<endl;

    return 0;
}