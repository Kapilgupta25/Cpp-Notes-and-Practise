#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


void find(int n, vector<string>&ans, string temp, int one, int zero){

    if(temp.size()==n){
        ans.push_back(temp);
        return ;
    }

    temp.push_back('1');
    find(n,ans,temp,one+1,zero);
    temp.pop_back();

    
    if(zero<one){
        temp.push_back('0');
        find(n,ans,temp,one,zero+1);
        temp.pop_back();
    }

}

int main(){
    int n;
    cout<<"Enter the size of binary number:";
    cin>>n;

    vector<string>ans;
    string temp;
    find(n, ans, temp, 0, 0);
    cout<<"Binary number having 1 more than 0 :"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}
