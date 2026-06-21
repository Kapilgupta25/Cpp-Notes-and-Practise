// #include<bits/stdc++.h>
// using namespace std;

// const long long MOD=1e9+7;

// long long countWays(int n, int x, vector<int> &coins, vector<long long> &dp){
//     if(x==0) return 1;
//     if(x<0) return 0;

//     if(dp[x]!=0) return dp[x];

//     for(int i=0; i<n; i++){
//         dp[x]+=countWays(n, x-coins[i], coins, dp);
//     }

//     return dp[x];
// }
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n, x;
//     cin>>n>>x;

//     vector<int> coins(n);
    
//     for(int i=0; i<n; i++){
//         cin>> coins[i];
//     }

//     vector<long long> dp(x+1, 0);

//     cout<<countWays(n, x, coins, dp)<<endl;

//     return 0;
// }



// tabultaion

#include<bits/stdc++.h>
using namespace std;

const long long MOD=1e9+7;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin>>n>>x;

    vector<int> coins(n);
    
    for(int i=0; i<n; i++){
        cin>> coins[i];
    }

    vector<long long> dp(x+1, 0);
    
    dp[0]=1;
    for(int i=1; i<=x; i++){
	    for(int c:coins){
		    if(i-c>=0){
			    dp[i]=(dp[i]+dp[i-c])%MOD;
			}
		}
    }
    
	cout<<dp[x]<<endl;
    
    return 0;
}




