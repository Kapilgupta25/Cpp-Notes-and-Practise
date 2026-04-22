#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;

    string s=to_string(n);
    for(int i=0; i<s.size(); i++){        
        if(s[i]-'0'>4){
            if(i==0){
                if(s[i]!='9'){
                    int num=9-(s[i]-'0');
                    s[i]=to_string(num)[0];
                }
            }
            else{
                int num=9-(s[i]-'0');
                s[i]=to_string(num)[0];
            }
        }
        
        
    }

    long long num=stoll(s);
    cout<<num<<endl;
    return 0;    
}
