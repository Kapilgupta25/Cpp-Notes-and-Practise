#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        vector<int> cnt(n+2, 0);
        for (int i=0;i<n;i++){
            int a; cin >> a;
            cnt[a]++;
        }
        vector<char> dp(n+2, 0);
        vector<char> orv(n+2, 0);

        deque<int> dq;
        long long windowTrue = 0;

        for (int v=n; v>=1; v--) {
            if (v+1 <= n) {
                dq.push_back(v+1);
                windowTrue += dp[v+1];
            }
            int removeIdx = v+1+k;
            if (removeIdx <= n && !dq.empty() && dq.front() == removeIdx) {
                windowTrue -= dp[removeIdx];
                dq.pop_front();
            }
            orv[v] = (windowTrue > 0) ? 1 : 0;
            dp[v] = (cnt[v] % 2 == 0) ? (char)(!orv[v]) : orv[v];
        }

        bool ans = false;
        for (int v=1; v<=n; v++) {
            if (cnt[v] == 0) continue;
            if (cnt[v] % 2 == 0) {
                if (orv[v] == 0) { ans = true; break; }
            } else {
                if (orv[v] == 1) { ans = true; break; }
            }
        }

        cout << (ans ? "YES" : "NO") << '\n';
    }
}