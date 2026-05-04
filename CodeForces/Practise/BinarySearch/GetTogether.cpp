#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<pair<int, int>> arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i].first>>arr[i].second;
    }

    sort(arr.begin(), arr.end());

    long long low=0, high=1e10, ans=0;

    while(low<=high){
        long long mid=low+(high-low)/2;
        
   
    return 0;
}
}


