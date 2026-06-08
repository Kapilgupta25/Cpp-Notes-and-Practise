#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        vector<long long> h(n);
        for(int i = 0; i < n; i++) cin >> h[i];
        
        for(int l = 0; l < n; l++){
            vector<long long> w(n, 0);
            
            // Go RIGHT from l
            // Edge h[(l+k-1)%n] connects vessel (l+k-1)%n to (l+k)%n
            long long mn = LLONG_MAX;
            for(int k = 1; k < n; k++){
                mn = min(mn, h[(l + k - 1) % n]);
                w[(l + k) % n] = mn;
            }
            
            // Go LEFT from l
            // Edge h[(l-k+n)%n] connects vessel (l-k+n)%n to (l-k+1+n)%n
            mn = LLONG_MAX;
            for(int k = 1; k < n; k++){
                int cur = ((l - k) % n + n) % n;
                mn = min(mn, h[cur]);
                w[cur] = max(w[cur], mn);
            }
            
            long long s = 0;
            for(auto x : w) s += x;
            cout << s << " \n"[l == n - 1];
        }
    }
    return 0;
}