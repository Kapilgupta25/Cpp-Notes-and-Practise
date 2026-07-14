#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, m;
        cin>>n>>m;
        vector<long long> a(n+1);

        for(int i=1; i<=n; i++) cin>>a[i];
        
        vector<int> b(m);
        for(int i=0; i<m; i++) cin>>b[i];
        sort(b.begin(), b.end());
        
        vector<long long> prefSum(n+1, 0);
        for(int i=1; i<=n; i++) prefSum[i]=prefSum[i-1]+a[i];
        
        long long ans=0;
        int prev=0;
        for(int k=0; k<m; k++){
            long long segSum=prefSum[b[k]]-prefSum[prev];
            ans+=llabs(segSum);
            prev=b[k];
        }

        long long endSum=prefSum[n]-prefSum[prev];
        ans+=endSum;
        
        cout<<ans<<endl;
    }
    
    return 0;
}