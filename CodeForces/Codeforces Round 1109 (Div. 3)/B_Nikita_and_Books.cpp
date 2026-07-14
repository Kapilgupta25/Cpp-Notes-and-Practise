#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<ll> a(n+1);
        for(int i=1; i<n+1; i++){
            cin>>a[i];
        }

        vector<ll> prefixSum(n+1, 0);
        for(int i=1; i<n+1; i++){
            prefixSum[i]=prefixSum[i-1]+a[i];
        }

        ll totalSum=prefixSum[n];
        ll minreq=(n*(n+1))/2;
        bool flag=(totalSum>=minreq);
        if(flag){
            for(int i=1; i<=n; i++){
                ll minSumReq=(i*(i+1))/2;
                if(minSumReq>prefixSum[i]){
                    flag=false;
                    break;
                }
            }
        }

        flag? cout<<"YES"<<endl : cout<<"NO"<<endl;

    }

    return 0;
}