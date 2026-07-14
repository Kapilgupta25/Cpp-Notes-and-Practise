#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll solve(int idx, ll rem, map<pair<int, ll>, ll> &dp, vector<ll> &w, vector<ll> &v, vector<ll> &pref){
    if(idx<0) return 0;

    pair<int, ll> key=make_pair(idx, rem);
    if(dp.count(key)) return dp[key];

    ll ans=solve(idx-1, min(rem, pref[idx]), dp , w, v, pref);

    if(rem>=w[idx]){
        ans=max(ans, v[idx]+solve(idx-1, rem-w[idx], dp, w, v, pref));
    }

    return dp[key]=ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int N;
        ll W;
        cin>>N>>W;

        vector<ll> w(N);
        vector<ll> v(N);
        vector<ll> pref(N+1, 0);

        for(int i=0; i<N; i++){
            cin>>w[i]>>v[i];
            pref[i+1]=pref[i]+w[i];
        }

        map<pair<int, ll>, ll> dp;

        cout<<solve(N-1, W, dp, w, v, pref)<<endl;
    
    }

    return 0;
}