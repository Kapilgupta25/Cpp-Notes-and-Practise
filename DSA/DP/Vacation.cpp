
// #include<bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// const int MOD=1e9+7;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin>>n;

//     vector<int> a(n), b(n), c(n);

//     for(int i=0; i<n; i++){
//         cin>>a[i]>>b[i]>>c[i];
//     }

//     // dp[i][j] indicate the max points till "j" day that can be obtained considering "i" activity should be done on the "j" day 
//     vector<vector<ll>> dp(3, vector<ll>(n, 0));
//     // base case
//     dp[0][0]=a[0];
//     dp[1][0]=b[0];
//     dp[2][0]=c[0];

//     for(int j=1; j<n; j++){
//         dp[0][j]=a[j]+max(dp[1][j-1], dp[2][j-1]);
//         dp[1][j]=b[j]+max(dp[0][j-1],dp[2][j-1]);
//         dp[2][j]=c[j]+max(dp[0][j-1], dp[1][j-1]);
//     }

//     cout<<max({dp[0][n-1], dp[1][n-1], dp[2][n-1]})<<endl;

//     return 0;
// }


// // Time: O(n*3)
// // Space: O(n*3)


 // space Optimization


#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD=1e9+7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<int> a(n), b(n), c(n);

    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i]>>c[i];
    }

    // base case
    ll score_a=a[0];
    ll score_b=b[0];
    ll score_c=c[0];

    for(int j=1; j<n; j++){
        ll new_score_a=a[j]+max(score_b, score_c);
        ll new_score_b=b[j]+max(score_a, score_c);
        ll new_score_c=c[j]+max(score_b, score_a);

        score_a=new_score_a;
        score_b=new_score_b;
        score_c=new_score_c;
    }

    cout<<max({score_a, score_b,score_c})<<endl;

    return 0;
}


// Time: O(n*3)
// Space: O(3)