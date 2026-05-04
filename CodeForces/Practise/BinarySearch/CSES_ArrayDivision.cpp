#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isPossible(vector<ll> &arr, ll k, ll mid){
    ll sum=0;
    int cnt=1;
    for(int i=0; i<arr.size(); i++){
        if(sum+arr[i]<=mid){
            sum+=arr[i];
        }
        else{
            cnt++;
            sum=arr[i];
            if(sum>mid) return false;
        }
    }

    return cnt<=k;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,k;
    cin>>n>>k;
    ll sum=0;

    vector<ll> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }

    ll low=0, high=sum;
    ll ans=0;
    while(low<=high){
        ll mid=low+(high-low)/2;
        if(isPossible(arr, k, mid)){
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



// TC: O(nlog(sum of arr))
// SC: O(n)

