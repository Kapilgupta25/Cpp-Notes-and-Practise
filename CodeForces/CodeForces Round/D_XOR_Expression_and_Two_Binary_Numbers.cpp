#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        long long n,k;
        cin>>n>>k;

        string s, z;
        cin>>s>>z;

        long long ps=count(s.begin(), s.end(), '1');
        long long pz=count(z.begin(), z.end(), '1');
        long long pxz = 0;
        for (int i=0; i<n; i++) pxz+=(s[i] != z[i]);

        long long total=(1LL<<k)+1;
        long long temp1,temp2,temp3;

        if(k%2==1){
            temp1=temp2=temp3=total/3;
        }
        else{
            temp1 = temp2 = (total + 1) / 3;
            temp3 = (total - 2) / 3;
        }

        long long ans = 0;
        ans += temp1*ps*(n-ps);
        ans += temp2*pz*(n-pz);
        ans += temp3*pxz*(n-pxz);

        cout<<ans<<endl;
    }

    return 0;
}