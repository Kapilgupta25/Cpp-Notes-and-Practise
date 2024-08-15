#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void generateParenthese(int left, int right, int n, vector<string> &ans, string &temp){
    if(left+right==2n){
        ans.push_back(temp);
        return ;
    }

// LEFT PARENTHESE
    if(left<n){
        temp.push_back('(');
        generateParenthese(left+1, right, n, ans, temp);
        temp.pop_back();
    }
// RIGHT PARENTHESE
    if(right<left){
        temp.push_back(')');
        generateParenthese(left, right+1, n, ans, temp);
        temp.pop_back();
    }
}

int main(){
    int n;
    cout<<"Enter the pairs of parenthese::";
    cin>>n;
    vector<string> ans;
    vector<string> temp;

    generateParenthese(0, 0, n, ans, temp);
    cout<<"All the SubSequences of the array is:";
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}