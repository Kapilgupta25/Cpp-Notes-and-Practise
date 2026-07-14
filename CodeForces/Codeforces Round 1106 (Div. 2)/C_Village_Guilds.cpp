#include <bits/stdc++.h>
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
        vector<int> parent(n+1, 0);
        vector<vector<int>> children(n+1);

        for(int i=2;i<=n;i++){
            int p;
            cin>>p;
            parent[i]=p;
            children[p].push_back(i);
        }

        vector<int> height(n+1, 0);
        for(int v=n; v>=1; v--){
            int height0=-1, height1=-1;
            for(int child: children[v]){
                int childH=height[child];
                
                if(childH>height0){ 
                    height1=height0;
                    height0=childH; 
                }
                else if(childH>height1){ 
                    height1=childH; 
                }
            }

            height[v]=(height0==-1) ? 0:height0+1;
        }

        long long ans=0;
        for(int v=1; v<=n; v++){
            ans+=1;            
            ans+=height[v];    
            if(!children[v].empty()){
                int H0=-1, H1=-1;
                for(int child:children[v]){
                    int hc=height[child];
                    if(hc>H0){
                        H1=H0; 
                        H0=hc; 
                    }
                    else if(hc>H1){ 
                        H1=hc; 
                    }
                }

                ans-=max(0, H0-H1);
            }
        }

        cout<<ans<<endl;
    }
    
    return 0;
}