#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;  
    while (t--) {
        int n;
        cin >> n; 
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];  
        }

        stack<long long> stk;
        long long ans = 0;

        for (int i = 0; i < n; i++) {

            if (!stk.empty() && (stk.top() % 2 == a[i] % 2)) {
                long long top = stk.top();
                stk.pop();
                long long product = top * a[i];
                stk.push(product);
                ans++;
            } else {
                stk.push(a[i]);
            }
        }

        cout << ans << endl; 
    }
    return 0;
}