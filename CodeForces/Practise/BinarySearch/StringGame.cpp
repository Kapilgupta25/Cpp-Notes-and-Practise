#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isPossible(vector<ll> &arr, ll mid, string p, string t){
    unordered_set<int> s;
    for(int i=0; i<mid; i++){
        s.insert(arr[i]);
    }
    string res="";
    for(int i=0; i<t.length(); i++){
        if(s.find(i)==s.end()){
            res+=t[i];
        }
    }
    int p1=0, idx=0;
    while(p1<p.length() && idx<res.length()){
        if(p[p1]==res[idx]){
            p1++;
            idx++;
        }
        else{
            idx++;
        }
    }
    return p1==p.length();

}


// bool isPossible(vector<ll> &arr, ll mid, string &p, string &t){
//     vector<bool> removed(t.size(), 0);

//     for(int i = 0; i < mid; i++){
//         removed[arr[i]] = true;
//     }

//     int j = 0; // pointer for p

//     for(int i = 0; i < t.size(); i++){
//         if(removed[i]) continue;

//         if(t[i] == p[j]){
//             j++;
//         }

//         if(j == p.size()) return true;
//     }

//     return j == p.size();
// }

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string p,t;
    cin>>t>>p;

    int n=t.length();

    vector<ll> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
        arr[i]-=1;
    }

    ll low=0;
    ll high=n;
    
    while(high>low+1){
        ll mid=low+(high-low)/2;
        if(isPossible(arr, mid, p, t)){
            low=mid;
        }
        else{
            high=mid;
        }
    }

    cout<<low<<endl;
   
    return 0;
}


