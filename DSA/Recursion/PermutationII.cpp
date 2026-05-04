#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


// reduce the space complexity
void Permute(vector<int> &arr, vector<vector<int>> &ans, int index){
    if(index==arr.size()){
        ans.push_back(arr);
        return;
    }

    vector<bool> used(21,0);

    for(int i=index;i<arr.size();i++){
        if(used[arr[i]+10]==0){
            used[arr[i]+10]=1;
            swap(arr[i],arr[index]);
            Permute(arr, ans, index+1);
            swap(arr[i],arr[index]);
            used[arr[i]+10]=0;
        }
    }
}

 
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cout<<"Enter the "<<i<<"th Element:";
        cin>>arr[i];
    }

    vector<vector<int>> ans;
    Permute(arr, ans, 0);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}