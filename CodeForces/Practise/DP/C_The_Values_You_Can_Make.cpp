
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n, K;
//     cin>>n>>K;

//     vector<int> coins(n);
//     for(int i=0; i<n; i++) cin>>coins[i];

//     // dp[i][j][x]  => ca we form sum "j" using first "i" coins with a subset sum of "x"
//     vector<vector<vector<bool>>> dp(n+1, vector<vector<bool>>(K+1, vector<bool>(K+1, false)));

//     dp[0][0][0]=1;

//     for(int i=1; i<=n; i++){
//         int c=coins[i-1];
//         for(int j=0; j<=K; j++){
//             for(int x=0; x<=K; x++){
//                 // exclude "i" coin
//                 if(dp[i-1][j][x]) dp[i][j][x]=true;
//                 // include "i"th coin in sum "j" but not in subset sum "x"    
//                 else if(j>=c && dp[i-1][j-c][x]) dp[i][j][x]=true;
//                 // include "i"th coin in sum "j" and also in subset sum "x" 
//                 else if(j>=c && x>=c && dp[i-1][j-c][x-c]) dp[i][j][x]=true;
//             }
//         }
//     }

//     vector<int> values;
//     // collect all possible "x" where dp[n][K][x] is true
//     for(int x=0; x<=K; x++){
//         if(dp[n][K][x])
//             values.push_back(x);
//     }

//     cout<<values.size()<<endl;
    
//     for(int val:values){
//         cout<<val<<" ";
//     }
    
//     return 0;
// }




// conversion of above code to 2D dp array


#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin>>n>>k;

    vector<int> coins(n);
    for(int i=0; i<n; i++) cin>>coins[i];

    vector<vector<bool>> dp(k+1, vector<bool>(k+1, false));

    dp[0][0]=true;

    for(int c:coins){
        for(int s=k; s>=c; s--){
            for(int x=k; x>=0; x--){
                if(dp[s-c][x]){
                    dp[s][x]=true;
                    if(x+c<=k) dp[s][x+c]=true;
                }
            }
        }
    }

    vector<int> values;

    for(int x=0; x<=k; x++){
        if(dp[k][x]) values.push_back(x);
    }

    cout<<values.size()<<endl;
    
    for(int val:values){
        cout<<val<<" ";
    }
    
    return 0;
}