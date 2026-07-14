#include <bits/stdc++.h>
using namespace std;

static const int NEG=-1000000000;

struct FenwickMax{
    int sz;
    vector<int> tree;
    void init(int sze) {
        sz=sze;
        tree.assign(sz+2, NEG);
    }

    void update(int pos, int val) {
        for(int i=pos+1; i<=sz; i+=i&(-i))
            tree[i]=max(tree[i], val);
    }
    
    int query(int pos) {
        int res=NEG;
        for(int i=pos; i>0; i-=i&(-i))
            res=max(res, tree[i]);
        return res;
    }
};

int main(){
    int t;
    cin>>t; 

    while(t--){
        string a,b;
        cin>>a>>b;
        
        int n=a.size();
        int m=b.size();

        vector<int> PrefixA(n+1), PrefixB(m+1);
        PrefixA[0]=0;
        for(int i=0; i<n; i++){
            PrefixA[i+1]=(PrefixA[i]+(a[i]-'0'))%10;
        }
        PrefixB[0]=0;
        for(int j=0; j<m; j++){
            PrefixB[j+1]=(PrefixB[j]+(b[j]-'0'))%10;
        }
        
        vector<FenwickMax> fen(10);
        for(int r=0; r<10; r++){
            fen[r].init(m + 1);
        }
        
        
        vector<int> dp0(m + 1, NEG);
        dp0[0]=0;
        for(int j=0; j<=m; j++){
            if (dp0[j] > NEG) {
                int d = ((PrefixA[0]-PrefixB[j]) % 10 + 10) % 10;
                fen[d].update(j, dp0[j]);
            }
        }

        int finalAns = NEG;

        vector<int> dpRow(m+1);
        for(int i=1; i<=n; i++) {
            for(int j=0; j<=m; j++){
                int d=((PrefixA[i]-PrefixB[j])%10+10)%10;
                int q=fen[d].query(j);
                dpRow[j]=(q>NEG)?(q+1):NEG;
            }

            for(int j=0; j<=m; j++){
                if(dpRow[j] > NEG) {
                    int d=((PrefixA[i]-PrefixB[j])%10+10)%10;
                    fen[d].update(j, dpRow[j]);
                }
            }
            if (i == n) finalAns = dpRow[m];
        }

        if(finalAns>NEG) cout<<finalAns<<endl;
        else cout<<-1<<endl;
    }
    
    return 0;
}