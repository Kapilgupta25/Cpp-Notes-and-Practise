#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF=1e18;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;

        vector<int> a(n), b(n);
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];

        ll cost1=0;
        for(int i=0; i<n; i++){
            if(a[i]<b[i]){
                cost1=INF;
                break;
            }
            cost1+=a[i]-b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        ll cost2=c;
        for(int i=0; i<n; i++){
            if(a[i]<b[i]){
                cost2=INF;
                break;
            }
            cost2+=a[i]-b[i];
        }

        ll ans=min(cost1, cost2);
        if(ans==INF) cout<<-1<<endl;
        else cout<<ans<<endl;
    }
    
    return 0;   
}