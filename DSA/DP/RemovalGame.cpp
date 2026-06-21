// #include<bits/stdc++.h>
// using namespace std;

// typedef long long ll;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin>>n;

//     vector<int> arr(n);

//     for(int &i:arr) cin>>i;

//     // dp[i][j] indicate the max sum with which first player first can win in (0-i) sub-array.... where i and j denotes the first and last index of the sub-array 

//     vector<vector<ll>> dp(n, vector<ll>(n, 0));

//     for(int g=0; g<n; g++){
//         for(int i=0, j=g; j<n; i++, j++){
//             if(i==j){  // or g==0 i.e, sub-array with len 1
//                 dp[i][j]=arr[i];
//             }
//             else if(j-i==1){  // or g==2 i.e, sub-array with len 2
//                 dp[i][j]=max(arr[i], arr[j]);
//             }
//             else{
//                 ll val1=arr[i]+min(dp[i+2][j], dp[i+1][j-1]);
//                 ll val2=arr[j]+min(dp[i][j-2], dp[i+1][j-1]);
//                 dp[i][j]=max(val1, val2);
//             }
//         }
//     }

//     cout<<dp[0][n-1]<<endl;
    
//     return 0;
// }



// memo
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


ll solve(int i, int j, vector<int>& arr, vector<vector<ll>>& dp){
    // only one element
    if(i==j) return arr[i];
    // two elements
    if(j-i==1) return max(arr[i], arr[j]);

    if(dp[i][j]!=-1) return dp[i][j];

    // take left element
    ll left = arr[i] + min(solve(i+2,j,arr,dp), solve(i+1,j-1,arr,dp));


    // take right element
    ll right = arr[j] + min(solve(i,j-2,arr,dp), solve(i+1,j-1,arr,dp));

    return dp[i][j]=max(left,right);
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<int> arr(n);
    for(int &i:arr) cin>>i;

    vector<vector<ll>> dp(n, vector<ll>(n,-1));

    cout<<solve(0,n-1,arr,dp)<<endl;

    return 0;
}