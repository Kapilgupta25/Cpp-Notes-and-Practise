#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isPossible(ll r, ll x, ll cb, ll cs, ll cc, int nb, int ns, int nc, int pb, int ps, int pc){
    ll needB=cb*x;
    ll needS=cs*x;
    ll needC=cc*x;

    ll buyB=max(0LL, needB-nb);
    ll buyS=max(0LL, needS-ns);
    ll buyC=max(0LL, needC-nc);

    ll totalCost=buyB*pb+buyS*ps+buyC*pc;

    return r>=totalCost;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;
    
    int nb, ns, nc, pb, ps, pc;
    cin>>nb>>ns>>nc>>pb>>ps>>pc;

    ll r;
    cin>>r;
    ll cb=0,cs=0,cc=0;

    for(int i=0; i<s.size(); i++){
        if(s[i]=='B') cb++;
        else if(s[i]=='C') cc++;
        else cs++;
    }

    ll low=0;
    ll high=1e13;
    ll ans=0;

    while(low<=high){
        ll mid=low+(high-low)/2;
        if(isPossible(r, mid, cb, cs, cc, nb, ns, nc, pb, ps, pc)){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    cout<<ans<<endl;

    return 0;
}


