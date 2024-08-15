#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


string SortSentence(string s){
    vector<string> ans(10);
    string temp;
    int n=s.size(),count=0,index=0;
    while(index<n){
        if(s[index]==' '){
            int pos=temp[temp.size()-1]-'0';
            temp.pop_back();
            ans[pos]=temp;
            temp.clear();
            count++;
        }
        else{
            temp+=s[index];
        }
        index++;
    }

// for pushing last element to the ans
    int pos=temp[temp.size()-1]-'0';
    temp.pop_back();
    ans[pos]=temp;
    temp.clear();
    count++;

// for access the ans
    for(int i=1;i<=count;i++){
        temp+=ans[i];
        temp+=' ';
    }
    temp.pop_back();      
    return temp;
}

int main(){
    string s;
    cout<<"Enter the sentence:";
    cin>>s;

    string res=SortSentence(s);
    cout<<res<<endl;
    return 0;
}
