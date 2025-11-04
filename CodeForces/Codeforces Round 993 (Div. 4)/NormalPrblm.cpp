#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string str, ans="";
        cin>>str;
        int n=str.size()-1;
        for(int i=n; i>=0; i--){
            if(str[i]=='p'){
                ans+='q';
            }
            else if(str[i]=='q'){
                ans+='p';
            }
            else{
                ans+=str[i];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
