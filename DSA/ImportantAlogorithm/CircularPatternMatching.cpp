#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


void CircularMatching(string s, string target){
    string CircularString=s+s;
    int n=CircularString.size(),m=target.size(),prefix=0,suffix=1;

    // Finding the LPS of targated string
    vector<int> lps(m,0);
    while(suffix<m){
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
                prefix=lps[prefix]-1;
            }
        }
    }

    // finding targated substring in the main circular string
    int first=0,second=0;
    while(first<n && second<m){
        if(CircularString[first]==target[second]){
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
    if(second==m){
        cout<<target<<" is present in the main String.";
    }
    else if(second!=m){
        cout<<target<<" is not present in the main String.";
    }
}

int main(){
    string s,target;
    cout<<"Enter the main String:";
    cin>>s;
    cout<<"Enter the substring that you want to find:";
    cin>>target;

    CircularMatching(s, target);
    return 0;
}
