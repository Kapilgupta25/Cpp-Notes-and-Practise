#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD=1e9+7;

vector<vector<int>> adj;
vector<int> colour;
vector<int> dp0, dp1;
int n;

void dfs(int v, int parent){
    ll curr0=1, curr1=0;

    for(int u:adj[v]){
        if(u==parent) continue;
        dfs(u, v);

        ll a=dp0[u], b=dp1[u];
        ll sum=(a+b)%MOD;

        ll new_curr0=(curr0*sum)%MOD;
        ll new_curr1=((curr1*sum)%MOD + (curr0*b)%MOD)%MOD;

        curr0=new_curr0;
        curr1=new_curr1;
    }

    // black node
    if(colour[v]==1){
        dp0[v]=0;
        dp1[v]=(int)(curr0%MOD);
    }
    else{   // white node
        dp0[v]=(int)(curr0%MOD);
        dp1[v]=(int)(curr1%MOD);
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    adj.assign(n, {});
    colour.resize(n);
    dp0.assign(n, 0);
    dp1.assign(n, 0);
    
    for(int i=1; i<n; i++){
        int p;
        cin>>p;
        adj[i].push_back(p);
        adj[p].push_back(i);
    }

    for(int i=0; i<n; i++) cin>>colour[i];

    dfs(0, -1);
    cout<<dp1[0]%MOD<<endl;

    return 0;
}
