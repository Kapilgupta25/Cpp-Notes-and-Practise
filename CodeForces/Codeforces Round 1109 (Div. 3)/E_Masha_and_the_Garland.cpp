#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, q;
        cin>>n>>q;

        char temp[200005];
        cin>>temp+1;
        
        vector<int> d(n+1);
        for(int i=1; i<=n; i++){
            int pat=(i%2==1)? 0:1;
            int sc=temp[i]-'0';
            d[i]=sc^pat;
        }
        
        vector<int> U(n+1, 0), D(n+1, 0);
        for(int i=1; i<=n; i++){
            int up=0, down=0;
            if(d[i]==1){
                if(i==1 || d[i-1]==0) up=1;
            } 
            else{
                if(i==1 || d[i-1]==1) down=1;
            }
            U[i]=U[i-1]+up;
            D[i]=D[i-1]+down;
        }
        
        while(q--){
            int l, r, k;
            cin>>l>>r>>k;
            
            long long Bulb1=((d[l]==1)? 1:0)+(U[r]-U[l]);
            long long Bulb0=((d[l]==0)? 1:0)+(D[r]-D[l]);
            
            long long ans=min(Bulb1, Bulb0);
            cout<<((ans<=k) ? "YES":"NO")<<endl;
        
        }
    }

    return 0;
}