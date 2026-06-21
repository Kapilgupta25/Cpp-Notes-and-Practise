
#include<bits/stdc++.h>
using namespace std;

const int MOD=1e9+7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    vector<vector<int>> dp(n, vector<int>(m+2, 0)); // m+2 to avoid out of bound

    // base case
    if(arr[0]==0){
        for(int i=1; i<=m; i++){
            dp[0][i]=1;
        }
    }
    else{
        dp[0][arr[0]]=1;
    }

    // fill the dp table
    for(int i=1; i<n; i++){
        if(arr[i]==0){
            for(int k=1; k<=m; k++){
                dp[i][k]=dp[i-1][k];
                if(k-1>=1) dp[i][k]=(dp[i][k]+dp[i-1][k-1])%MOD;
                if(k+1<=m) dp[i][k]=(dp[i][k]+dp[i-1][k+1])%MOD;
            }
        }
        else{
            int k=arr[i];
            dp[i][k]=dp[i-1][k];
            if(k-1>=1) dp[i][k]=(dp[i][k]+dp[i-1][k-1])%MOD;
            if(k+1<=m) dp[i][k]=(dp[i][k]+dp[i-1][k+1])%MOD;
        }
    }

    int ans=0;
    for(int i=1; i<=m; i++){
        ans=(ans+dp[n-1][i])%MOD;
    }

    cout<<ans<<endl;

    return 0;
}

