#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int x, count=0, ans=0;
        cin>>x;
        string s;
        cin>>s;
        for(int i=0; i<x; i++){
            if(s[i]=='.'){
                count++;
            }
            else{
                if(count==0){
                    ans+=0;
                    count=0;
                }
                else if(count==1){
                    ans+=1;
                    count=0;
                }
                else if(count==2){
                    ans+=2;
                    count=0;
                }
                else if(count>=3){
                    break;
                }
            }
        }
        if(count>=3){
            ans=2;
        }
        else{
            ans+=count;
        }
        cout<<ans<<endl;
    }
    return 0;
}
