#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool check(ll x, ll n){
    ll count=0;
    for(int i=1; i<=n; i++){
        count+=min(n, (x/i));
    }

    return count>=((n*n+1)/2);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin>>n;

    ll low=1;
    ll high=n*n;
    ll ans=0;

    while(low<=high){
        ll mid=low+(high-low)/2;
        if(check(mid, n)){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }

    cout<<ans<<endl;

    return 0;
}