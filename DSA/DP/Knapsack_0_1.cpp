// #include<bits/stdc++.h>
// using namespace std;

// typedef long long ll;

// ll helper(vector<ll> &wt, vector<ll> &val, int w, int i){
//     if(i==wt.size()) return 0;

//     ll take=0;
//     if(wt[i]<=w){
//         take= val[i]+helper(wt, val, w-wt[i], i+1);
//     }

//     ll notTake=helper(wt, val, w, i+1);

//     return max(take, notTake);
// } 

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
 
//     int n,w;
//     cin>>n>>w;

//     vector<ll> wt(n);
//     vector<ll> val(n);
    
//     for(int i=0; i<n; i++){
//         cin>> wt[i];
//         cin>> val[i];
//     }

//     cout<<helper(wt, val, w, 0)<<endl;

//     return 0;
// }


// // MEMOIZATION APPROCH
// #include<bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// vector<vector<ll>> dp;

// ll helper(vector<ll> &wt, vector<ll> &val, int w, int i){
//     if(i==wt.size()) return 0;

//     if(dp[i][w]!=-1) return dp[i][w];

//     ll take=0;
//     if(wt[i]<=w){
//         take= val[i]+helper(wt, val, w-wt[i], i+1);
//     }

//     ll notTake=helper(wt, val, w, i+1);

//     return dp[i][w]=max(take, notTake);
// } 

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
 
//     int n,w;
//     cin>>n>>w;

//     vector<ll> wt(n);
//     vector<ll> val(n);
    
//     for(int i=0; i<n; i++){
//         cin>> wt[i];
//         cin>> val[i];
//     }

//     dp.assign(n, vector<ll>(w+1, -1));

//     cout<<helper(wt, val, w, 0)<<endl;

//     return 0;
// }



// // TABULATION APPROCH

// #include<bits/stdc++.h>
// using namespace std;

// typedef long long ll;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
 
//     int n,w;
//     cin>>n>>w;

//     vector<ll> wt(n+1);
//     vector<ll> val(n+1);
    
//     for(int i=1; i<=n; i++){
//         cin>> wt[i];
//         cin>> val[i];
//     }

//     vector<vector<ll>> dp(n+1, vector<ll>(w+1, 0));

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=w; j++){
//             if(j>=wt[i]){
//                 dp[i][j]=max(dp[i-1][j], val[i]+dp[i-1][j-wt[i]]);
//             }
//             else{
//                 dp[i][j]=dp[i-1][j];
//             }
//         }
//     }

//     cout<<dp[n][w]<<endl;

//     return 0;
// }


// Space Optimisation : as in the dp table at a time we use only current row(i) and the prev row(i-1)

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n,w;
    cin>>n>>w;

    vector<ll> wt(n+1);
    vector<ll> val(n+1);
    
    for(int i=1; i<=n; i++){
        cin>> wt[i];
        cin>> val[i];
    }

    vector<ll> dp(w+1, 0);

    for(int i=1; i<=n; i++){
        for(int j=w; j>=wt[i]; j--){
            dp[j]=max(dp[j], val[i]+dp[j-wt[i]]);
        }
        
    }

    cout<<dp[w]<<endl;

    return 0;
}

