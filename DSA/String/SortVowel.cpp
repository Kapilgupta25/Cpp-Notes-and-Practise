#include<iostream>
#include<vector>
using namespace std;

// Time complexity and Space complexity of O(n)
string SortVowels(string &s){
    int n=s.size();
    vector<int> lower(26,0), upper(26,0);

// count the repetation of lowercase and uppercase vowels
    for(int i=0;i<n;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            lower[s[i]-'a']++;
            s[i]='#';
        }
        else if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
            upper[s[i]-'A']++;
            s[i]='#';
        }
    }
// sort the vowels and store them in "ans" variable
    string ans;
    for(int i=0;i<26;i++){
        char c='A'+i;
        while(upper[i]){
            ans+=c;
            upper[i]--;
        }
    }
    for(int i=0;i<26;i++){
        char c='a'+i;
        while(lower[i]){
            ans+=c;
            lower[i]--;
        }
    }

    int index=0;
    for(int i=0;i<n;i++){
        if(s[i]=='#'){
            s[i]=ans[index];
            index++;
        }
    }
    return s;
}

int main(){
    string s;
    cout<<"Enter the string:";
    cin>>s;


    cout<<"String with sorted vowels is: "<<SortVowels(s)<<endl;
    return 0;
}
