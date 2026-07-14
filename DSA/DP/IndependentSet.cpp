#include <bits/stdc++.h>
using namespace std;

const int MOD=1e9+7;
const int MAXN=100005;
typedef long long ll;
vector<int> adj[MAXN];
ll dp[MAXN][2];

void dfs(int v, int parent){
    dp[v][0]=dp[v][1]=1;  // base case

    for(int u:adj[v]){
        if(u==parent) continue;

        dfs(u, v);

        dp[v][0]=(dp[v][0]*(dp[u][0]+dp[u][1])%MOD)%MOD;
        dp[v][1]=(dp[v][1]*dp[u][0])%MOD;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    
    for(int i=0; i<n-1; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    dfs(1, 0);
    ll ans=(dp[1][0]+dp[1][1])%MOD;
    cout<<ans<<endl;
    
    return 0;
}

