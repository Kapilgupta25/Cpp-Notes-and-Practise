#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    
    while(t--){
        int x;
        cin>>x;

        string temp=to_string(x);
        int d=temp.length();

        int y=1;
        for(int i=0; i<d; i++) y*=10;
        y+=1;

        cout<<y<<endl;
    }

    return 0;
}