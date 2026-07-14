#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 998244353;
const int MAXN = 200000;
ll fact[MAXN + 1], invFact[MAXN + 1];


ll helper(ll a, ll b){
    ll res = 1;
    while(b){
        if(b&1)
            res=res*a%MOD;
        a=a*a%MOD;
        b>>=1;
    }

    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    fact[0]=1;
    for(int i=1; i<=MAXN; i++) fact[i]=fact[i-1]*i%MOD;
    invFact[MAXN]=helper(fact[MAXN], MOD-2);
    for(int i=MAXN; i>=1; i--) invFact[i-1]=invFact[i]*i%MOD;

    int t;
    cin>>t;
    while(t--){
        int N; ll K;
        cin>>N>>K;
        vector<ll> A(N);
        for(int i=0; i<N; i++) cin>>A[i];

        ll ans=1;
        int i=0;
        while(i<N){
            ll rem = A[i] % K;       
            ll comp = (K - rem) % K;
            if (rem==comp) {
                int j=i;
                while(j+1<N && A[j+1]%K==rem) j++;
                int len = j - i + 1;
                ans = ans * fact[len] % MOD;
                unordered_map<ll, int> freq;
                for (int k = i; k <= j; k++) freq[A[k]]++;
                for (auto &[value, cnt] : freq) ans = ans * invFact[cnt] % MOD;
                i = j + 1;
            } else {
                int j = i;
                while (j + 1 < N) {
                    ll nxt = A[j + 1] % K;
                    if (nxt == rem || nxt == comp) j++;
                    else break;
                }
                int len = j - i + 1;
                int cntRem = 0;
                for (int k = i; k <= j; k++) if (A[k] % K == rem) cntRem++;
                int cntComp = len - cntRem;
                ans = ans * fact[len] % MOD;
                ans = ans * invFact[cntRem] % MOD;
                ans = ans * invFact[cntComp] % MOD;
                i = j + 1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}   