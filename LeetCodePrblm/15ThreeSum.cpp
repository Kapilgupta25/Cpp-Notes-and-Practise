#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;



vector<vector<int>> threeSum(vector<int> &arr){
    sort(arr.begin(), arr.end());
    int n=arr.size();
    if(n<3){
        return {};
    }
    vector<vector<int>> triplet;

    for(int i=0;i<n-2;i++){
        if (i > 0 && arr[i] == arr[i - 1]) {
            continue;
        }
        int start=i+1,end=n-1;
        while(start<end){
            int target=arr[i]+arr[start]+arr[end];
            if(target==0){
                triplet.push_back({arr[i],arr[start],arr[end]});
                start++,end--;
                while(start<end && arr[start]==arr[start-1]){
                    start++;
                }
                while(start<end && arr[end]==arr[end+1]){
                    end--;
                }
            }
            else if(target<0){
                start++;
            }
            else{
                end--;
            }
        }
    }
    return triplet;
}


int main(){
    int n;
    cout<<"Enter the size of vector:";
    cin>>n;

    vector<int>arr(n);
    for (int i=0; i<n; i++){
        cout<<"Enter the "<<i<<"th Element:";
        cin>>arr[i];
    }

    vector<vector<int>> ans=threeSum(arr);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
