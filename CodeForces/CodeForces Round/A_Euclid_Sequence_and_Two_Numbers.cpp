#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> b(n);

        for (int i = 0; i < n; i++) cin >> b[i];

        if (n == 2) {
            cout << max(b[0], b[1]) << " " << min(b[0], b[1]) << "\n";
            continue;
        }

        sort(b.begin(), b.end(), greater<long long>());

        bool ok = true;

        for (int i=2; i<n; i++){
            if (b[i - 2] % b[i - 1] != b[i]) {
                ok = false;
                break;
            }
        }

        if (!ok) {
            cout << -1 << "\n";
        } else {
            cout << b[0] << " " << b[1] << "\n";
        }
    }

    return 0;
}