
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n,k;
    cin>>n>>k;

    vector<ll> stone(n);
    
    for(int i=0; i<n; i++){
        cin>> stone[i];
    }

    vector<bool> dp(k+1, 0);

    for(int i=1; i<=k; i++){
        for(int s:stone){
            if(i-s>=0){
                if(dp[i-s]==0){
                    dp[i]=1;
                    break;
                }
            }
        }
    }

    if(dp[k]) cout<<"First"<<endl;
    else cout<<"Second"<<endl;

    return 0;
}

