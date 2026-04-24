#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool check(ll n, int x, int y, ll t){
    return (t/x)+(t/y)>=n-1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    int x,y;
    cin>>n>>x>>y;

    if(n==1){
        cout<<min(x,y)<<endl;
        return 0;
    }

    ll low=1;
    ll high=1LL*max(x, y)*n;

    ll ans=high;

    while(low<=high){
        ll mid=low+(high-low)/2;
        if(check(n, x, y, mid)){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }

    cout<<ans+min(x,y)<<endl;

    return 0;

}

// tc: O( log(max(x,y)*n) )
// sc: O(1)
