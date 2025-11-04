#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }

        int ans = 0;
	    for(int i=0;i<n;i++){
	        if(i+1<n){
	            ans=max(a[i]-b[i+1]+ans,ans);
	        }
	        else{
	            ans=max(ans+a[i],a[i]-0);
	        }
	    }
        cout<<ans<<endl;
	}
}

