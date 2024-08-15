#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

// KMP search
void lpsFind(vector<int> &lps, string target){
    int prefix=0,suffix=1;
    while(suffix<target.size()){
        if(target[prefix]==target[suffix]){
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
}

int KMPsearch(string s, string target){
    vector<int>lps(target.size(),0);
    lpsFind(lps, target);

    int first=0,second=0;
    while(first<s.size() && second<target.size()){
        if(s[first]==target[second]){
            first++,second++;
        }
        else{
            if(second==0){
                first++;
            }
            else{
                second=lps[second-1];
            }
        }
    }
// if answer exist
    if(second==target.size()){
        return 1;
    }
    return 0;
}

int ReapetedStringMatch(string a, string b) {
    if(a==b)
    return 1;

// increase the size of string "a" than string "b"
    int repeat=1;
    string temp=a;
    while(temp.size()<b.size()){
        temp+=a;
        repeat++;
    }

// now apply KMP search
    if(KMPsearch(temp,b)==1){
        return repeat;
    }
// if not matched the repeat one more time and aplly KMP search
    if(KMPsearch(temp+a,b)==1){
        return repeat+1;
    }
    return -1;
}

int main(){
    string s,target;
    cout<<"Enter the main String:";
    cin>>s;
    cout<<"Enter the substring that you want to find:";
    cin>>target;

    int ans=ReapetedStringMatch(s, target);
    if(ans==-1){
        cout<<target<<" is not present in the string.";
        return 0;
    }
    cout<<ans<<" times repeat.";
    return 0;
}