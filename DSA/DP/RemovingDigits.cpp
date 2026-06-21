// #include<bits/stdc++.h>
// using namespace std;

// long long countSteps(int n, vector<long long> &dp){
//     if(n<=0) return 0;
//     if(n<=9) return 1;
    
//     if(dp[n]!=LLONG_MAX) return dp[n];
    
//     set<int> digits;
//     int temp=n;
//     while(temp){
//         int rem=temp%10;
//         if(rem!=0) digits.insert(rem);
//         temp/=10;
//     }

//     for(int dig:digits){
//         dp[n]=min(dp[n], 1+countSteps(n-dig, dp));
//     }

//     return dp[n];
// }

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin>>n;

//     vector<long long> dp(n+1, LLONG_MAX);

//     cout<<countSteps(n, dp)<<endl;
    
//     return 0;
// }

// tabulation

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin>>n;

//     vector<long long> dp(n+1, LLONG_MAX);

//     dp[0]=0;

//     for(int i=1; i<=n; i++){
//         int temp=i;
//         while(temp){
//             int rem=temp%10;
//             if(rem!=0) dp[i]=min(dp[i], 1+dp[i-rem]);
//             temp/=10;
//         }
//     }

//     cout<<dp[n]<<endl;
    
//     return 0;
// }



// =================> greedy approch


#include<bits/stdc++.h>
using namespace std;

int getLargest(int num){

    int ans=0;
    while(num){
        int rem=num%10;
        ans=max(ans, rem);
        num/=10;
    }

    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    int steps=0;
    while(n){
        int largest=getLargest(n);
        n-=largest;
        steps++;
    }

    cout<<steps<<endl;
    
    return 0;
}