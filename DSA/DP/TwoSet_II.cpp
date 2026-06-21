
// // TABULATION WITH SPACE OPTIMIZATION

// #include<bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// const int MOD=1e9+7;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin>>n;

//     ll sum=n*(n+1)/2;
//     if(sum%2!=0){
//         cout<<0<<endl;
//         return 0;
//     }

//     ll x=sum/2;
//     vector<ll> dp(x+1, 0);
//     dp[0]=1;

//     for(int i=1; i<=n; i++){
//         for(int j=x; j>=i; j--){
//             dp[j]=(dp[j]+dp[j-i])%MOD;
//         }
//     }
//     ll inverse_2=500000004;

//     cout<<(dp[x]*inverse_2)%MOD<<endl;

//     return 0;
// }


// TABULATION

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD=1e9+7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    ll sum=n*(n+1)/2;
    if(sum%2!=0){
        cout<<0<<endl;
        return 0;
    }

    ll x=sum/2;
    vector<vector<ll>> dp(n+1, vector<ll>(x + 1, 0));
    dp[0][0]=1;

    for(int i=1; i<=n; i++){
        for(int j=0; j<=x; j++){
            dp[i][j]=dp[i-1][j];
            if(j>=i) dp[i][j]=(dp[i-1][j]+dp[i-1][j-i])%MOD;
        }
    }

    // we have to divide the answer by 2 because we are counting both (A,B) and (B,A) as different sets but they are same. So we will take inverse of 2 under modulo and multiply it with our answer.
    ll inverse_2=500000004;

    cout<<(dp[n][x]*inverse_2)%MOD<<endl;

    return 0;
}