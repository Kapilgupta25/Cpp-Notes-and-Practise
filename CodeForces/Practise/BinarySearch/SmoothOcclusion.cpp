#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool check(vector<pair<ll, ll>> &arr, ll h, ll x){
    ll prev_l=0;
    ll prev_r=h;

    for(auto [u, d]: arr){
        ll curr_l=max(h-d, 0LL);
        ll curr_r=min(h,u);

        // intersect with prev tooth range
        ll new_l=max(curr_l, prev_l-x);
        ll new_r=min(curr_r, prev_r+x);

        if(new_l>new_r) return false;

        prev_l=new_l;
        prev_r=new_r;

    }
    return true;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,x;
    cin>>n>>x;

    vector<pair<ll, ll>> tooth(n);

    ll sum=0;
    ll max_sum=0;

    for(int i=0; i<n; i++){
        cin>>tooth[i].first>>tooth[i].second;
        sum+=tooth[i].first+tooth[i].second;
        max_sum=max(max_sum, tooth[i].first+tooth[i].second);
    }

    ll low=0;
    ll high=max_sum;
    ll ans=0;

    while(low<=high){
        ll h=low+(high-low)/2;
        if(check(tooth, h, x)){
            ans=h;
            low=h+1;
        }
        else{
            high=h-1;
        }
    }

    cout<<sum-(n*ans)<<endl;

    return 0;
}


// TC: O( n*log(max(Ui+Di)) )
// SC: O(n)