#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<int> a(n+1);
    vector<int> b(n+1);

    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        cin>>b[i];
    }

    for(int i=1; i<=n; i++){
        if(b[a[i]]!=i){
            cout<<"No\n";
            return 0;
        }
    }
    
    cout<<"Yes\n";
    return 0;
}
