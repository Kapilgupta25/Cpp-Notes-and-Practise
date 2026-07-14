#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;

    vector<vector<int>> adj(n+1);
    vector<int> Indeg(n+1);
    vector<int> dp(n+1, 0);  // dp[v] == store the longest path that ends at v

    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        Indeg[v]++;
    }

    queue<int> q;
    for(int i=1; i<=n; i++){
        if(Indeg[i]==0) q.push(i);
    }

    vector<int> topo;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        topo.push_back(node);
        for(int child:adj[node]){
            Indeg[child]--;
            if(Indeg[child]==0) q.push(child);
        }
    }

    for(int u:topo){
        for(int v:adj[u]){
            dp[v]=max(dp[v], dp[u]+1);
        }
    }

    int ans=*max_element(dp.begin(), dp.end());
    cout<<ans<<endl;
    
    return 0;
}

