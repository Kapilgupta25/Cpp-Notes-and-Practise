#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int n;
const int MAXN=200005;
vector<int> adj[MAXN];
ll dp[MAXN][2];

void dfs(int v, int parent){
    dp[v][0]=0;
    dp[v][1]=0;

    ll sum=0;
    for(int u:adj[v]){
        if(u==parent) continue;

        dfs(u, v);
        sum+=max(dp[u][0], dp[u][1]);
    }

    dp[v][0]=sum;

    ll best=0;
    for(int u:adj[v]){
        if(u==parent) continue;
        ll include_u=1+dp[u][0]+(sum-max(dp[u][0], dp[u][1]));
        best=max(best, include_u);
    }

    dp[v][1]=best;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0; i<n-1; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, 0);
    cout<<max(dp[1][0], dp[1][1])<<endl;

    return 0;
}
