#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string s=to_string(n);
    for(int i=0; i<s.size(); i++){
        if(s[i]-'0'>4){
            int num=9-(s[i]-'0');
            s[i]=to_string(num)[0];
        }
    }

    cout<<stoi(s);
    return 0;    
}
