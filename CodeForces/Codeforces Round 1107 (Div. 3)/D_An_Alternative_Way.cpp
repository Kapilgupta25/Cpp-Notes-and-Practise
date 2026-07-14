#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;

        vector<ll> a(n+1), b(n+1);
        for(int i=1; i<=n; i++) cin>>a[i];
        for(int i=1; i<=n; i++) cin>>b[i];

        vector<ll> u(n+1);
        vector<ll> d(n+1);

        for(int i=1; i<=n; i++){
            ll diff=b[i]-a[i];
            u[i]=(i&1)?-diff:diff;
        }
        d[1]=u[1];
        for(int i=2; i<=n; i++){
            d[i]=u[i]-u[i-1];
        }

        ll negToken=0;
        ll posToken=0;

        bool flag=true;
        for(int i=1; i<=n && flag; i++){
            if(i%2==1){
                if(d[i]<=0) negToken+=-d[i];
                else{
                    if(negToken<d[i]) flag=false;
                    else negToken-=d[i];
                }
            }
            else{
                if(d[i]>=0) posToken+=d[i];
                else{
                    if(posToken<-d[i]) flag=false;
                    else posToken+=d[i];
                }
            }
        }

        cout<<(flag?"YES":"NO")<<endl;
    }

    return 0;
}