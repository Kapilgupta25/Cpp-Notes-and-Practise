#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        int continuousHash=0;
        int maxi=0;
        for(int i=0; i<n; i++){
            if(s[i]=='#'){
                continuousHash++;
                maxi=max(maxi, continuousHash);
            }
            else{
                continuousHash=0;
            }
        }

        int ans=(maxi+1)/2;
        cout<<ans<<endl;
    }

    return 0;
}