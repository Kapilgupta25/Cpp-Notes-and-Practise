// #include<bits/stdc++.h>
// using namespace std;

// const long long MOD=1e9+7;

// long long countWays(int n){
//     if(n==0) return 1;
//     if(n<0) return 0;

//     long long total=0;
//     for(int i=1; i<=6; i++){
//         total+=countWays(n-i);
//     }

//     return total%MOD;
// }
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin>>n;

//     cout<<"Total Ways = "<<countWays(n)<<endl;
    
//     return 0;
// }


// // memoization Top to bottom approch

// #include<bits/stdc++.h>
// using namespace std;

// const long long MOD=1e9+7;

// long long countWays(int n, vector<long long> &dp){
//     if(n==0) return 1;
//     if(n<0) return 0;

//     long long total=0;

//     if(dp[n]!=-1) return dp[n];

//     for(int i=1; i<=6; i++){
//         total+=countWays(n-i, dp);
//     }

//     return dp[n]=total%MOD;
// }
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin>>n;

//     vector<long long> dp(n+1, -1);

//     cout<<countWays(n, dp)<<endl;
    
//     return 0;
// }




// tabultation approch

#include<bits/stdc++.h>
using namespace std;

const long long MOD=1e9+7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<long long> dp(n+1, 0);

    dp[0]=1;
    for(int i=1; i<n+1; i++){
        for(int j=1; j<=6; j++){
            if(i-j>=0){
                dp[i]=(dp[i]+dp[i-j])%MOD;
            }
        }
    }

    cout<<dp[n]<<endl;
    
    return 0;
}