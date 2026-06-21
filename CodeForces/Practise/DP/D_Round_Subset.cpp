// space Opyimization (3D -> 2D dp)

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const long long MOD=1e9+7;

pair<int, int> countPairs(ll num){
    int count2=0, count5=0;
    while(num%2==0){
        count2++;
        num/=2;
    }
    while(num%5==0){
        count5++;
        num/=5;
    }

    return {count2, count5};
}
// Time: O(log(num==a[i]))


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin>>n>>k;

    vector<ll> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    vector<pair<int, int>> factors(n);
    int total5=0;
    for(int i=0; i<n; i++){
        factors[i]=countPairs(a[i]);
        total5+=factors[i].second;
    }

    // dp[j][l] store max 2s with "j" selected numbers and has "l" 5s
    const int max5=total5;
    vector<vector<int>> dp(k+1, vector<int>(max5+1, -1));
    dp[0][0]=0;

    for(int i=0; i<n; i++){
        int curr2=factors[i].first;
        int curr5=factors[i].second;
        // iterate backward ---> rolling optimization 
        for(int j=k; j>=0; j--){
            for(int l=max5; l>=0; l--){
                if(dp[j][l]==-1) continue;

                if(j+1<=k && l+curr5<=max5){
                    if(dp[j+1][l+curr5]<dp[j][l]+curr2){
                        dp[j+1][l+curr5]=curr2+dp[j][l];
                    }
                }
            }
        }
    }

    int maxRoundness=0;
    for(int l=0; l<=max5; l++){
        if(dp[k][l]!=-1){
            maxRoundness=max(maxRoundness, min(l, dp[k][l]));
        }
    }

    cout<<maxRoundness<<endl;
	    
    return 0;
}


// Time: O(n*k*max5);
// Sapce: O(k*max5);

