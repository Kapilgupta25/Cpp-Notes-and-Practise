#include<iostream>
#include<vector>
using namespace std;


string sortAlpha(string &s){
    int n=s.size();
    vector<int> count(26,0);

// count the repetation of alphabets
    for(int i=0;i<n;i++){
        int index=s[i]-'a';
        count[index]++;
    }

// print the alphabet in sorted order
    string ans;
    for(int i=0;i<26;i++){
        char c='a'+i;
        while(count[i]){
            ans+=c;
            count[i]--;
        }
    }
    return ans;
}

int main(){
    string s;
    cout<<"Enter the string:";
    cin>>s;

    cout<<"String before sorted: "<<s<<endl;

    cout<<"String after sorted: "<<sortAlpha(s)<<endl;
    return 0;
}
