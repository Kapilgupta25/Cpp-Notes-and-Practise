#include<iostream>
#include<vector>
using namespace std;


int LongestPallindrome(string &s){
    int n=s.size();
    vector<int> lower(26,0), upper(26,0);

// count the repetation of lowercase and uppercase alphabets
    for(int i=0;i<n;i++){
        if(s[i]>='a'){
            lower[s[i]-'a']++;
        }
        else{
            upper[s[i]-'A']++;
        }
    }


// calculate the size of longest pallindrome
    int ans=0,oddExistLower=0,oddExistUpper=0;
    for(int i=0;i<26;i++){
        if(lower[i]%2==0){
            ans+=lower[i];
        }
        else{
            ans+=(lower[i]-1);
            oddExistLower=1;
        }
        if(upper[i]%2==0){
            ans+=upper[i];
        }
        else{
            ans+=(upper[i]-1);
            oddExistUpper=1;
        }
        
    }
    if(oddExistLower==1 || oddExistUpper==1){
        ans+=1;
    }

    return ans;
}

int main(){
    string s;
    cout<<"Enter the string:";
    cin>>s;


    cout<<"The length of Longest pallindrome is "<<LongestPallindrome(s)<<endl;
    return 0;
}
