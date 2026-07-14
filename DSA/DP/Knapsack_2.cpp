// // Tabulation

// #include<bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// const ll INF=1e18;
// const int maxVal=1e5;

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

//     vector<vector<ll>> dp(n+1, vector<ll>(maxVal+1, INF));
//     dp[0][0]=0;

//     for(int i=1; i<=n; i++){
//         for(int j=0; j<=maxVal; j++){
//             // option 1: don't take
//             dp[i][j]=dp[i-1][j];

//             // option 2: Take
//             if(j-val[i]>=0 && dp[i-1][j-val[i]]!=INF){
//                 ll new_wt=dp[i-1][j-val[i]]+wt[i];
//                 if(new_wt<=w){ // only taken if wt within capacity
//                     dp[i][j]=min(new_wt, dp[i][j]);
//                 }
//             }
//         }
//     }

//     int ans=0;
//     for(int j=maxVal; j>=0; j--){
//         if(dp[n][j]<=w){
//             ans=j;
//             break;
//         }
//     }

//     cout<<ans<<endl;
//     return 0;
// }





// // Space Optimisation : Rolling array 

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF=1e18;
const int maxVal=1e5;

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

    vector<ll> dp(maxVal+1, INF);
    dp[0]=0;

    for(int i=1; i<=n; i++){
        for(int j=maxVal; j>=val[i]; j--){
            dp[j]=min(dp[j], dp[j-val[i]]+wt[i]);
        }   
    }

    int ans=0;
    for(int i=maxVal; i>=0; i--){
        if(dp[i]<=w){
            ans=i;
            break;
        }
    }

    cout<<ans<<endl;

    return 0;
}

