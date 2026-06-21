
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    cin>>s>>t;
    
    int m=s.size();
    int n=t.size();

    vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
    // dp[i][j] will store the length of longest common subsequence of s[0...i-1] and t[0...j-1]

    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(s[i-1]==t[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    // to find the longest common subsequence string
    // we backtrack from dp[m][n] to dp[0][0] to find the LCS string

    string ans="";
    int i=m, j=n;
    while(i>0 && j>0){
        if(s[i-1]==t[j-1]){
            ans+=s[i-1];
            i--, j--;
        }
        else if(dp[i-1][j]>dp[i][j-1]) i--;
        else j--;
    }

    reverse(ans.begin(), ans.end());
    cout<<ans<<endl;

    return 0;
}

