#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int H,W,K;
    cin>>H>>W>>K;

    vector<string> S(H);
    for(auto &x:S) cin>>x;

    vector<vector<int>> a(H, vector<int>(W));
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            a[i][j]=S[i][j]-'0';
        }
    }

    ll ans=0;
    for(int top=0; top<H; top++){
        vector<int> col(W,0);
        for(int bot=top; bot<H; bot++){
            for(int j=0; j<W; j++){
                col[j]+=a[bot][j];
            }

            unordered_map<int,int> mp;
            mp[0]=1;
            int sum=0;

            for(int j=0; j<W; j++){
                sum+=col[j];
                if(mp.count(sum-K)) ans += mp[sum-K];
                mp[sum]++;
            }
        }
    }

    cout<<ans<<"\n";

}