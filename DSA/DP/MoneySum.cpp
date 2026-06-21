
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int n;
//     cin>>n;

//     int x=0;

//     vector<int> coins(n);
//     for(int &i:coins){
//         cin>>i;
//         x+=i;
//     }

//     vector<vector<bool>> dp(n+1, vector<bool>(x+1, 0));

//     // dp[i][j]  can we make "j" sum using till "i" coins
//     dp[0][0]=1;

//     for(int i=1; i<=n; i++){
//         for(int j=0; j<=x; j++){
//             dp[i][j]=dp[i-1][j];
//             if(j>=coins[i-1]){
//                 dp[i][j]=dp[i][j]||dp[i-1][j-coins[i-1]];
//             }
//         }
//     }

//     vector<int> sums;
//     for(int j=1; j<=x; j++){
//         if(dp[n][j]){
//             sums.push_back(j);
//         }
//     }

//     cout<<sums.size()<<endl;
//     for(int s:sums){
//         cout<<s<<" ";
//     }

//     return 0;
// }


// space OPtimization

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;

    int x=0;

    vector<int> coins(n);
    for(int &i:coins){
        cin>>i;
        x+=i;
    }

    // rooling array optimisation
    vector<int> dp(x+1, 0);
    dp[0]=1;

    for(int coin:coins){
        for(int j=x; j>=coin; j--){
            if(dp[j-coin]) dp[j]=1;
        }
    }

    vector<int> sums;
    for(int j=1; j<=x; j++){
        if(dp[j]){
            sums.push_back(j);
        }
    }

    cout<<sums.size()<<endl;
    for(int s:sums){
        cout<<s<<" ";
    }

    return 0;
}

