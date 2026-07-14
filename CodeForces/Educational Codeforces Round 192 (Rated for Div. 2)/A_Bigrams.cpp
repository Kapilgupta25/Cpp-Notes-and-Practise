#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t;
    cin>>t;

    while(t--){
        int k;
        cin>>k;
        vector<ll> word(k);
        ll maxi=0;
        int count2=0;

        for(int i=0; i<k; i++){
            cin>>word[i];
            maxi=max(maxi, word[i]);
            if(word[i]==2) count2++;
        }

        bool ans=(maxi>=3 || count2>=2);
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    
    return 0;
}

