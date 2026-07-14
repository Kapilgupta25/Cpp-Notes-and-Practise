#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        ll ans=0;

        for(ll i=1; i<=n; i++){
            ll x=n/i;
            ans+=x*x;
        }

        cout<<ans<<endl;
    }
    
    return 0;   
}