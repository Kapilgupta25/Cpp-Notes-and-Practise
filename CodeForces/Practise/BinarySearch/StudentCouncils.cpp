#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// bool isPossible(priority_queue<ll> pq, ll x, int k){
//     while(x--){
//         int t=k;
//         vector<int> council;
//         while(t--){
//             if(pq.top()==0){
//                 return false;
//             }
//             council.push_back(pq.top()-1);
//             pq.pop();
//         }
//         for(int i=0; i<council.size(); i++){
//             pq.push(council[i]);
//         }
//     }

//     return true;
    
// }


bool isPossible(vector<ll> &arr, ll x, int k){
    ll total=0;

    for(ll student:arr){
        total+=min(student, x);
    }

    return total>=k*x;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k,n;
    cin>>k>>n;

    ll sum=0;
    vector<ll> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }

    ll low=0, high=sum;
    ll ans=low;
    while(low<=high){
        ll mid=low+(high-low)/2;
        if(isPossible(arr, mid, k)){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    cout<<ans<<endl;
   
    return 0;
}

