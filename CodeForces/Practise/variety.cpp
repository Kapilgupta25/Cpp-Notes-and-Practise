#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N,K,M;
    cin>>N>>K>>M;

    vector<vector<ll>> gemColor(N+1);
    vector<pair<ll,int>> all;

    for(int i=0;i<N;i++){
        int c;
        ll v;
        cin>>c>>v;

        gemColor[c].push_back(v);
        all.push_back({v,c});
    }

    for(auto &v:gemColor ) sort(v.rbegin(),v.rend());

    priority_queue<ll, vector<ll>, greater<ll>> picked;
    priority_queue<ll> extra;

    ll ans=0;
    int unique=0;
    

    for(auto &v:gemColor){
        if(!v.empty()){
            ans += v[0];
            picked.push(v[0]);
            unique++;
            int vSz=v.size();
            for(int i=1;i<vSz;i++) extra.push(v[i]);
        }
    }

    while(unique>M){
        ans -= picked.top();
        extra.push(picked.top());
        picked.pop();
        unique--;
    }

    while(K-unique>0){
        ans+=extra.top();
        extra.pop();
        unique++;
    }
    
    cout<<ans<<"\n";

    return 0;
}