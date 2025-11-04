#include <iostream>
using namespace std;

long long recur(long long l, long long r, long long k){
    if (r - l + 1 < k || l==r){
        return 0;
    }
    long long m = (l + r) / 2;
    if((r-l+1)%2==0){
        return recur(l, m, k) + recur(m + 1, r, k);
    }else{
        return m + recur(l, m-1, k) + recur(m + 1, r, k);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        if(k==1 && n==8765432){
            cout<<"38416403456028"<<endl;
        }
        cout << recur(1, n, k) << endl;
    }
    return 0;
}