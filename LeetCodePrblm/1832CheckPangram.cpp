#include<iostream>
#include<vector>
using namespace std;


// time complexity of O(n) and space complexity of O(1)
bool CheckPangram(string s){
    int n=s.size();
    vector<bool> ans(26,0);
    for(int i=0;i<n;i++){
        int index=s[i]-'a';
        ans[index]=1;
    }

    for(int i=0;i<26;i++){
        if(ans[i]==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    string s;
    cout<<"Enter the string:";
    cin>>s;

    bool res=CheckPangram(s);
    if(res==1){
        cout<<s<<" is Pangram.";
    }
    else{
        cout<<s<<" is not Pangram."<<endl;
    }
    return 0;
}
