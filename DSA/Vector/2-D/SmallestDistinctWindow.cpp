#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

// Time complexity of O(n) and Space complexity of O(1)
void SmallestDistinctWindow(string s){
    vector<bool> count(256,0);
    int n=s.size();
    int first=0,second=0,len=s.size(),diff;
// calculate all unique charachter
    while(first<n){
        if(count[s[first]]==0){
            diff++;
        }
        count[s[first]]=count[s[first]]+1;
        first++;
    }
// reset count to ZERO
    for(int i=0;i<256;i++){
        count[i]=0;
    }

    while(second<n){

        // jab tak diff exist krta hai
        while(diff && second<n){
            if(count[s[second]]==0){
                diff--;
            }
            count[s[second]]=count[s[second]]+1;
            second++;
        }

        // jab diff==0 ho jata hai
        len=min(len,second-first);

        // jab tak diff ki value 1 na baan jaye
        while(diff!=1){
            len=min(len,second-first);
            count[s[first]]=count[s[first]]-1;

            if(count[s[first]]==0){
                diff++;
            }
            first++;
        }
    }
    cout<<len;
}

int main(){
    string s;
    cout<<"Enter the string:";
    cin>>s;

    SmallestDistinctWindow(s);
    return 0;
}
