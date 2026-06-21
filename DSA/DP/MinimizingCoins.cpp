#include<bits/stdc++.h>
using namespace std;

long long countCoins(int x, vector<long long> &dp, vector<int> &coins){
    if(x==0) return 0;

    if(dp[x]!=LLONG_MAX) return dp[x];

    for(int c:coins){
        if(x-c>=0){
            long long res=countCoins(x-c, dp, coins);
            if(res!=LLONG_MAX) dp[x]=min(dp[x], 1+res);
        }
    }

    return dp[x];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x;
    cin>>n>>x;

    vector<int> coins(n);

    for(int i=0; i<n; i++) cin>>coins[i];

    vector<long long> dp(x+1, LLONG_MAX);

    long long ans=countCoins(x, dp, coins);
    
    if(ans==LLONG_MAX) cout<<-1<<endl;
    else cout<<ans<<endl;
    
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n,x;
//     cin>>n>>x;

//     vector<int> coins(n);

//     for(int i=0; i<n; i++) cin>>coins[i];

//     vector<long long> dp(x+1, INT_MAX);

//     dp[0]=0;

//     for(int i=1; i<=x; i++){
//         for(int c:coins){
//             if(i-c>=0){
//                 dp[i]=min(dp[i], 1+dp[i-c]);
//             }
//         }
//     }

//     if(dp[x]==INT_MAX) cout<<-1<<endl;
//     else cout<<dp[x]<<endl;

//     return 0;
// }