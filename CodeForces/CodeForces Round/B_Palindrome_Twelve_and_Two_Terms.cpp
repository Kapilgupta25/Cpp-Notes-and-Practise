#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long n;
        cin>>n;

        if(n==10) {
            cout<<-1<<'\n';
            continue;
        }

        int rem=n%12;
        long long a;

        if (rem<=9) a=rem;
        else if (rem==10) a=22;
        else a=11;

        cout<<a<<' '<<(n-a)<<endl;
    }

    return 0;
}