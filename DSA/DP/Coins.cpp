// //  Tabulation 

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin>>n;

//     vector<double> pro(n+1);
//     for(int i=1; i<=n; i++) cin>>pro[i];

//     int heads=(n+1)/2;

//     vector<vector<double>> dp(n+1, vector<double>(n+1, 0.0));
//     // dp[i][j] tells that the pro of getting j heads in i tosses
//     dp[0][0]=1.0;  // base case

//     for(int i=1; i<=n; i++){
//         for(int j=0; j<=i; j++){
//             if(j==0) dp[i][j]=dp[i-1][j]*(1-pro[i]);
//             else dp[i][j]=(dp[i-1][j-1]*pro[i])+(dp[i-1][j]*(1-pro[i]));
//         }
//     }

//     double ans=0.0;
//     for(int j=(n+1)/2; j<=n; j++){
//         ans+=dp[n][j];
//     }

//     cout<<fixed<<setprecision(10)<<ans<<endl;
//     return 0;
// }


//  Space Optimization 

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<double> pro(n+1);
    for(int i=1; i<=n; i++) cin>>pro[i];

    // dp[i] tells that the pro of getting i heads in n tosses
    vector<double> dp(n+1, 0.0);
    dp[0]=1.0; // base case

    for(int i=1; i<=n; i++){
        for(int j=i; j>=0; j--){
            if(j==0) dp[j]=dp[j]*(1-pro[i]);
            else dp[j]=dp[j]*(1-pro[i])+dp[j-1]*pro[i];
        }
    }

    double ans=0.0;
    for(int j=(n+1)/2; j<=n; j++){
        ans+=dp[j];
    }

    cout<<fixed<<setprecision(10)<<ans<<endl;
    
    return 0;
}

