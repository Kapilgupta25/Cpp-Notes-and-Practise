#include <bits/stdc++.h>
using namespace std;

bool checkLen(const vector<int>& a, int n, int L){
    if(2*L>n)return false;

    vector<int> freq(n+1, 0);
    deque<int> mnq, mxq;
    int unique=0;

    const int INF=1e9;

    vector<int> minStart(n + 2, INF);
    vector<int> maxStart(n + 2, -INF);

    for(int i=0; i<n; i++){
        if(++freq[a[i]]==1) unique++;

        while(!mnq.empty() && a[mnq.back()]>=a[i]) mnq.pop_back();
        mnq.push_back(i);

        while (!mxq.empty() && a[mxq.back()] <= a[i]) mxq.pop_back();
        mxq.push_back(i);

        if(i>=L){
            int fail=i-L;

            if (--freq[a[fail]] == 0) unique--;

            if (!mnq.empty() && mnq.front()==fail) mnq.pop_front();
            if (!mxq.empty() && mxq.front()==fail) mxq.pop_front();
        }

        if(i>=L-1){
            int start=i-L+1;

            int mn=a[mnq.front()];
            int mx=a[mxq.front()];

            if (unique==L && mx-mn==L-1){
                minStart[mn] = min(minStart[mn], start);
                maxStart[mn] = max(maxStart[mn], start);
            }
        }
    }

    for(int m=1; m+2*L-1<=n; m++){
        if (maxStart[m]==-INF) continue;
        if (maxStart[m+L] == -INF) continue;

        if (maxStart[m]-minStart[m+L]>=L) return true;
        if (maxStart[m+L]-minStart[m]>=L) return true;
    }

    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> a(n);
        for(int i=0; i<n; i++) cin>>a[i];

        int ans=0;
        for(int i= n/2; i>= 1; i--){
            if(checkLen(a, n, i)){
                ans = i;
                break;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}