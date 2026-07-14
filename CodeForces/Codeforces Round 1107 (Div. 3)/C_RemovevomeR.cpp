#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        int parts=1;
        for(int i=0; i<n-1; i++){
            if(s[i]!=s[i+1]){
                parts++;
            }
        }

        if(parts==2) cout<<2<<endl;
        else cout<<1<<endl;

    }

    return 0;
}