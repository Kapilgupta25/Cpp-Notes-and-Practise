#include<bits/stdc++.h>
using namespace std;

int parent[200005], rnk[200005];

int find(int x){
    while(parent[x]!=x){
        parent[x]=parent[parent[x]];
        x=parent[x];
    }
    
    return x;
}

void unite(int a, int b){
    a=find(a); b=find(b);
    if(a==b) return;
    if(rnk[a] < rnk[b]) swap(a,b);
    parent[b] = a;
    if(rnk[a] == rnk[b]) rnk[a]++;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, x, y;
        cin>>n>>x>>y;
        vector<int> p(n+1);

        for(int i=1; i<=n; i++) cin>>p[i];

        for(int i=1; i<=n; i++){
            parent[i]=i;
            rnk[i]=0;
        }
        
        for(int i=1; i+x<=n; i++) unite(i, i+x);
        for(int i=1; i+y<=n; i++) unite(i, i+y);
        
        bool flag=true;
        for(int i=1; i<=n; i++){
            if(find(i)!=find(p[i])){
                flag=false;
                break;
            }
        }
        
        cout<<(flag? "YES\n" : "NO\n");
    }
    return 0;
}