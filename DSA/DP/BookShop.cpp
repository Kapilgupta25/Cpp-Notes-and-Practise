
// #include<bits/stdc++.h>
// using namespace std;

// int helper(int i, int x, vector<int> &prices, vector<int> &pages, int n, vector<vector<int>> &dp){
//     if(i==n) return 0;  

//     if(dp[i][x]!=-1) return dp[i][x];

//     int notTake=helper(i+1, x, prices, pages, n, dp);
//     int take=0;
//     if(x>=prices[i]){
//         take=pages[i]+helper(i+1, x-prices[i], prices, pages, n, dp);
//     }

//     return dp[i][x]=max(take,notTake);
// }


// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n,x;
//     cin>>n>>x;

//     vector<int> prices(n);
//     for(int i=0; i<n; i++){
//         cin>>prices[i];
//     }

//     vector<int> pages(n);
//     for(int i=0; i<n; i++){
//         cin>>pages[i];
//     }

//     vector<vector<int>> dp(n, vector<int>(x+1, -1));

//     cout<<helper(0, x, prices, pages, n, dp)<<endl;
    
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x;
    cin>>n>>x;

    vector<int> prices(n);
    for(int i=0; i<n; i++){
        cin>>prices[i];
    }

    vector<int> pages(n);
    for(int i=0; i<n; i++){
        cin>>pages[i];
    }

    vector<int> dp(x+1, 0);
    dp[0]=0;

    for(int i=0; i<n; i++){
        // process book in reverse to avoid over writting
        for(int j=x; j>=prices[i]; j--){
            dp[j]=max(dp[j], dp[j-prices[i]]+pages[i]);
        }
    }

    cout<<dp[x]<<endl;
    return 0;
}
