#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isSquare(ll x){
    ll r=(ll)sqrtl((long double)x);
    while(r*r>x) r--;
    while((r+1)*(r+1)<=x) r++;
    return r*r==x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<ll> a(n+1);

        for(int i=1; i<=n; i++) cin>>a[i];

        vector<vector<int>> adj(n+1);

        for(int i=0; i<n-1; i++){
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> parent(n+1, 0);
        vector<int> dfsOrder;
        vector<ll> subtreeSize(n+1, 1);
        vector<bool> visited(n+1, false);

        stack<int> st;
        st.push(1);
        visited[1] = true;

        while(!st.empty()){
            int u=st.top();
            st.pop();

            dfsOrder.push_back(u);
            for(int v:adj[u]){
                if(!visited[v]){
                    visited[v]=true;
                    parent[v]=u;
                    st.push(v);
                }
            }
        }

        for(int i=n-1; i>=0; i--){
            int u=dfsOrder[i];
            if(parent[u]) subtreeSize[parent[u]]+=subtreeSize[u];
        }

        vector<vector<ll>> childSizes(n + 1);
        for(int u=2; u<=n; u++) childSizes[parent[u]].push_back(subtreeSize[u]);

        ll ans=0;
        for(int root=1; root<=n; root++){
            if(!isSquare(a[root])) continue;

            vector<ll> groups;
            if(root!=1) groups.push_back(n-subtreeSize[root]);
            for(ll sz:childSizes[root]) groups.push_back(sz);
            groups.push_back(1);
            ll S1=n, S2=0, S3=0;

            for(ll x:groups){
                S2+=x*x;
                S3+=x*x*x;
            }

            ll ways=(S1*S1*S1-3*S1*S2+2*S3)/6;
            ans+=ways;
        }

        cout<<ans<<endl;
    }

    return 0;
}