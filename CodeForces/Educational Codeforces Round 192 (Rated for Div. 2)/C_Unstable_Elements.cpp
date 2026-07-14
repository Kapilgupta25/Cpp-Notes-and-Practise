#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        ll k;
        cin>>n>>k;

        vector<int> a(n);
        for(int &x:a) cin>>x;

        vector<ll> blockSizes;
        int i=0;
        while(i<n){
            int j=i;
            while(j<n && a[j]==a[i]) j++;
            blockSizes.push_back(j-i);
            i=j;
        }

        map<ll, ll> cnt;
        map<ll, ll> sum;
        for(ll s:blockSizes){
            cnt[s]++;
            sum[s]+=s;
        }

        vector<ll> temp;
        for(auto &p : cnt) temp.push_back(p.first);
        int d=temp.size();

        vector<ll> sufCount(d+1, 0);
        vector<ll> sufSum(d+1, 0);

        for(int i=d-1; i>=0; i--){
            ll sz=temp[i];
            sufCount[i]=sufCount[i+1]+cnt[sz];
            sufSum[i]=sufSum[i+1]+sum[sz];
        }

        ll ans=0;
        for(int i=0; i<d; i++){
            ll currentSize=temp[i];
            ll totalBlocks=sufCount[i];
            ll totalSize=sufSum[i];
            ll threshold=currentSize-1;
            ll numerator=k-totalSize;
            if(totalBlocks==0) continue;
            if(numerator%totalBlocks!=0) continue;
            ll D=numerator/totalBlocks;
            if(D+threshold>=0) ans++;
        }

        cout<<ans<<endl;
    }

    return 0;
}