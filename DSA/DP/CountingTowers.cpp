
// #include<bits/stdc++.h>
// using namespace std;

// const int MOD=1e9+7;
// typedef long long ll;
// int MAX_N=1e6;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     // dp[i][0] number of ways to built tower of height "i" ending with vertical pattern(width=1)
//     // dp[i][1] numbers of ways to buils tower of height "i" ending with horizontal pattern(width=2)

//     vector<vector<ll>> dp(MAX_N+1, vector<ll>(2, 0));
//     // base case
//     dp[1][0]=1;  // one way to place vertical domains at height 1
//     dp[1][1]=1;  // one way to place horizonatl domain at height 1

//     for(int i=2; i<=MAX_N; i++){
//         dp[i][0]=(4*dp[i-1][0]+dp[i-1][1])%MOD;
//         dp[i][1]=(2*dp[i-1][1]+dp[i-1][0])%MOD;
//     }

//     // what we have done is that we have precomputed the dp table as it will be same for all the "t" testcases and this will reduce the time complexity form O(n*t) => O(n+t).

//     int t;
//     cin>>t;

//     while(t--){
//         int n;
//         cin>>n;

//         ll ans=(dp[n][0]+dp[n][1])%MOD;
//         cout<<ans<<endl;

//     }

//     return 0;
// }



// space optimsation



#include<bits/stdc++.h>
using namespace std;

const int MOD=1e9+7;
typedef long long ll;
int MAX_N=1e6;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // precompute result for all n upto MAX_N
    vector<ll> dp(MAX_N+1, 0);

    // base case
    ll saperate=1; // represent the state where the last layer is 2 saperate blocks (width=1)
    ll joined=1; // represent the state where the last layer is a single block of 2*1 (width=2)
    dp[1]=(saperate+joined)%MOD;

    for(int i=2; i<=MAX_N; i++){
        ll new_saperate=(4*saperate+joined)%MOD;
        ll new_joined=(2*joined+saperate)%MOD;

        dp[i]=(new_saperate+new_joined)%MOD;

        // update the state for next iteration
        saperate=new_saperate;
        joined=new_joined;
    }

    // what we have done is that we have precomputed the dp table as it will be same for all the "t" testcases and this will reduce the time complexity form O(n*t) => O(n+t).

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        cout<<dp[n]<<endl;
    }

    return 0;
}

