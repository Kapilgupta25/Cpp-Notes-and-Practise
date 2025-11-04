#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int m,a,b,c;
        cin>>m>>a>>b>>c;
        if(a>=m && b>=m){
            cout<<2*m<<endl;
        }
        else if(a<m && b<m){
            if(a+b+c<=2*m){
                cout<<a+b+c<<endl;
            }
            else{
                cout<<2*m<<endl;
            }
        }
        else if(a>=m && b<m ){
            if(b+c<=m){
                cout<<m+b+c<<endl;
            }
            else{
                cout<<2*m<<endl;
            }
        }
        else{
            if(a+c<=m){
                cout<<m+a+c<<endl;
            }
            else{
                cout<<2*m<<endl;
            }
        }
    }
    return 0;
}
