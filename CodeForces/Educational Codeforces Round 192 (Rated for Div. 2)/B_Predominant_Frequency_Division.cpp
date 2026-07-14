#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> a(n+1);
        vector<long long> pref1(n+1, 0);
        vector<long long> pref3(n+1, 0);

        for (int i=1; i<=n; i++){
            cin>>a[i];
            pref1[i]=pref1[i-1]+(a[i]==1);
            pref3[i]=pref3[i-1]+(a[i]==3);
        }

        vector<long long> f(n);

        for(int i=1; i<=n-1; i++){
            f[i]=2LL*pref3[i]-i;
        }

        vector<long long> sufMin(n+1, LLONG_MAX);

        for(int i=n-1; i>=1; i--){
            sufMin[i]=min(f[i], sufMin[i+1]);
        }

        bool isPossible=false;
        for(int L=1; L<=n-2; L++){
            if(2LL*pref1[L]>=L){
                if(sufMin[L+1]<=f[L]){
                    isPossible = true;
                    break;
                }
            }
        }

        cout<<(isPossible ? "YES":"NO")<<endl;
    }

    return 0;
}