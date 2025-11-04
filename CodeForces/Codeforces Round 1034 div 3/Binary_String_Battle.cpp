#include <iostream>
#include <string>
using namespace std;

bool aliceWins(const string &s, int k) {
    int ones = 0;
    for (char c : s) {
        if (c == '1') ones++;
    }

    if (ones <= k) return true;

    if (ones % k != 0) return true;

    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        cout << (aliceWins(s, k) ? "Alice\n" : "Bob\n");
    }

    return 0;
}
