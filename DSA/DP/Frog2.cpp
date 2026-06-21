// #include<bits/stdc++.h>
// using namespace std;

// long long totalCost(int k, vector<int> &height, vector<long long> &dp, int idx){
//     if(idx==1) return abs(height[idx]-height[idx-1]);
//     if(idx<=0) return 0;

//     if(dp[idx]!=INT_MAX) return dp[idx];

//     for(int i=1; i<=k; i++){
//         if(idx-i>=0){
//             dp[idx]=min(totalCost(k, height, dp, idx-i)+abs(height[idx]-height[idx-i]), dp[idx]);
//         }
//     }

//     return dp[idx];
// }

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n, k;
//     cin>>n>>k;

//     vector<int> height(n);
//     for(int i=0; i<n; i++) cin>>height[i];

//     vector<long long> dp(n, INT_MAX);

//     cout<<totalCost(k, height, dp, n-1)<<endl;
    
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin>>n>>k;

    vector<int> height(n);
    for(int i=0; i<n; i++) cin>>height[i];

    vector<long long> dp(n, INT_MAX);
    dp[0]=0;
    dp[1]=abs(height[1]-height[0]);

    for(int i=2; i<n; i++){
        for(int j=1; j<=k; j++){
            if(i-j>=0) dp[i]=min(dp[i-j]+abs(height[i]-height[i-j]), dp[i]);
        }
    }

    cout<<dp[n-1]<<endl;
    
    return 0;
}