#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Time complexity of O(n) and Space complexity of O(1)
int longestSubstring(string s){
    vector<bool> count(256,0);
    int first=0,second=0,len=0;
    while(second<s.size()){
        // repeating charachter ko hatane ke liye
        while(count[s[second]]){
            count[s[first]]=0;
            first++;
        }
        count[s[second]]=1;
        len=max(len,second-first+1);
        second++;
    }
    return len;
}

int main(){
    string s;
    cout<<"Enter the sentence:";
    cin>>s;

    int res=longestSubstring(s);
    cout<<"Longest substring without repeating character:"<<res<<endl;
    return 0;
}
