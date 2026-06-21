#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        string s;
        cin>>s;

        bool ok=true;

        for(int r=0; r<k; r++){
            int ones = 0;

            for(int pos=r; pos<n; pos+=k){
                if (s[pos]=='1')
                    ones++;
            }

            if(ones%2){
                ok=false;
                break;
            }
        }

        cout<<(ok ? "YES" : "NO")<<endl;;
    }

    return 0;
}