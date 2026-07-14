#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MAXN=50005;
const int MAXK=505;

vector<int> adj[MAXN];
int n,k;
ll ans=0;
int dp[MAXN][MAXK];

void dfs(int v, int p){
    dp[v][0]=1;   // no. of node at zero distance from node v is itself

    for(int u:adj[v]){
        if(u==p) continue;

        dfs(u, v);

        // count all distinct pair saperated at distance k
        for(int d=0; d<k; d++){
            ans+=(ll)(dp[v][k-d-1]*dp[u][d]);
        }

        // merge child's dp into parent dp
        for(int d=0; d<k; d++){
            dp[v][d+1]+=dp[u][d];
        }
    }

}

int main(){
    ios::sync_with_stdio;
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n>>k;
    for(int i=0; i<n-1; i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, 0); // DFS(child, parent) child is root(1) and root ka parent nhi hota so (0)...
    cout<<ans<<endl;

    return 0;
}
