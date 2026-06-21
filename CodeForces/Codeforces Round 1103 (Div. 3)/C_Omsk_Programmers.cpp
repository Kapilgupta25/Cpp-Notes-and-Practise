#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void helper(ll v, ll cost, ll x, unordered_map<ll, ll>& mp) {
    auto it=mp.find(v);
    if(it!= mp.end() && it->second<=cost) return;
    mp[v]=cost;
    if(v==0) return;

    helper(v/x, cost+1, x, mp);

    ll r=v%x;
    if(r){
        helper(v/x +1 , cost+(x-r)+1, x, mp);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){
        ll a,b,x;
        cin>>a>>b>>x;

        unordered_map<ll, ll> costA, costB;


        helper(a, 0, x, costA);
        helper(b, 0, x, costB);
        
        ll ans=LLONG_MAX;

        for(auto &[valA, ca]: costA){
            for(auto &[valB, cb]: costB){
                ans=min(ans, ca+cb+abs(valA-valB));
            }
        }
        
        cout<<ans<<endl;
    }

    return 0;
}