// #include<bits/stdc++.h>
// using namespace std;

// long long totalCost(int n, vector<int> &height, vector<long long> &dp, int idx){
//     if(idx==1) return abs(height[idx]-height[idx-1]);
//     if(idx<=0) return 0;

//     if(dp[idx]!=-1) return dp[idx];

//     dp[idx]=min(totalCost(n, height, dp, idx-1)+abs(height[idx]-height[idx-1]), totalCost(n, height, dp, idx-2)+abs(height[idx]-height[idx-2]));

//     return dp[idx];
// }

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin>>n;

//     vector<int> height(n);
//     for(int i=0; i<n; i++) cin>>height[i];

//     vector<long long> dp(n, -1);

//     cout<<totalCost(n, height, dp, n-1)<<endl;
    
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin>>n;

//     vector<int> height(n);
//     for(int i=0; i<n; i++) cin>>height[i];

//     vector<long long> dp(n);
//     dp[0]=0;
//     dp[1]=abs(height[1]-height[0]);

//     for(int i=2; i<n; i++){
//         dp[i]=min(dp[i-1]+abs(height[i]-height[i-1]), dp[i-2]+abs(height[i]-height[i-2]));
//     }

//     cout<<dp[n-1]<<endl;
    
//     return 0;
// }


// space Optimization

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<int> height(n);
    for(int i=0; i<n; i++) cin>>height[i];

    long long prev=0, curr=abs(height[1]-height[0]);

    for(int i=2; i<n; i++){
        long long temp=min(prev+abs(height[i]-height[i-2]), curr+abs(height[i]-height[i-1]));
        prev=curr;
        curr=temp;
    }

    cout<<curr<<endl;
    
    return 0;
}
