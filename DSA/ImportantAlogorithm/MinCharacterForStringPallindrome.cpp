#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int LPS(vector<int> &lps,string s){
    int n=s.size(),prefix=0,suffix=1;

    while(suffix<n){
        if(s[prefix]==s[suffix]){
            lps[suffix]=prefix+1;
            prefix++,suffix++;
        }
        else{
            if(prefix==0){
                suffix++;
            }
            else{
                prefix=lps[prefix-1];
            }
        }
    }
    return lps[n-1];
}



// Time complexity of O(n+m) and Space complexity of O(m)
int makePallindorome(string s){

// reverse the string and store it in the original for finding LPS
    string rev=s;
    int oldSize=s.size();
    reverse(rev.begin(),rev.end());
    s=s+"@"+rev;

// Finding LPS
    int newSize=s.size();
    vector<int> lps(newSize, 0);
    int pallindromeSize=LPS(lps, s);

    return oldSize-pallindromeSize;
}


int main(){
    string s;
    cout<<"Enter the String: ";
    cin>>s;

    int ans=makePallindorome(s);
    cout<<"Mimimum character which makes the string pallindrome is "<<ans<<endl;
    return 0;
}
