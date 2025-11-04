#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int &x : arr) {
            cin >> x;
        }

        vector<int> prefixMin(n), suffixMax(n);
        prefixMin[0]=arr[0];
        suffixMax[n-1]=arr[n-1];
        for(int i=1; i<n; i++){
            prefixMin[i] = min(prefixMin[i - 1], arr[i]);
        }

        for(int i=n-2; i>=0; i--){
            suffixMax[i] = max(suffixMax[i + 1], arr[i]);
        }
        
        string res(n, '1');
        for(int i=0; i<n; i++){
            if(prefixMin[i]<arr[i] && suffixMax[i]>arr[i])
                res[i] = '0';
        }
        cout << res << '\n';
    }
}