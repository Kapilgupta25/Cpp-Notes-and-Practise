#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


int LPS(string s){
    int n=s.size(),prefix=0,suffix=1;
    vector<int> lps(n, 0);
    while(suffix<n){
        if(s[prefix]==s[suffix]){
            lps[suffix]=prefix+1;
            prefix++,suffix++;
        }
        else{
            if(prefix==0){
                lps[suffix]=0;
                suffix++;
            }
            else{
                prefix=lps[prefix-1];
            }
        }
    }
    return lps[n-1];
}


int main(){
    string s;;
    cout<<"Enter the String: ";
    cin>>s;

    int ans=LPS(s);
    cout<<"Longest Prefix Suffix:"<<ans<<endl;
    return 0;
}
