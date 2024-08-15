#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void PrintSubsequence(vector<int>& vec, int index, int n, vector<vector<int>> &ans, vector<int> &temp){
    if(index==n){
        ans.push_back(temp);
        return ;
    }

// if we reject the element thus we only need to increase the value of index
    PrintSubsequence(vec, index+1, n, ans, temp);
// if we take the element thus we need to push that element in the temp array and then increase the index
    temp.push_back(vec[index]);
    PrintSubsequence(vec, index+1, n, ans, temp);
    temp.pop_back();          // if we pass the temp array as a reference then we need to pop the element
    
}

int main(){
    int n;
    cout<<"Enter the size of vector:";
    cin>>n;
    vector<int>vec(n);
    for (int i=0; i<n; i++){
        cout<<"Enter the "<<i<<"th Element:";
        cin>>vec[i];
    }

    vector<vector<int>> ans;
    vector<int> temp;
    PrintSubsequence(vec, 0, n, ans, temp);
    cout<<"All the SubSequences of the array is:";
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}