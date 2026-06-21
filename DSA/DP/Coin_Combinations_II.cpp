// tabultaion

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const long long MOD=1e9+7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin>>n>>x;

    vector<int> coins(n);
    
    for(int i=0; i<n; i++) cin>>coins[i];

    vector<ll> dp(x+1, 0);

    dp[0]=1;

    for(int c:coins){
        for(int j=c; j<=x; j++){
            dp[j]=(dp[j]+dp[j-c])%MOD;
        }
    }
    
    cout<<dp[x]<<endl;
	    
    return 0;
}




