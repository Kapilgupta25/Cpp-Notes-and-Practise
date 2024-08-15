#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


vector<string> summaryRanges(vector<int>& nums) {
    vector<string> ans;
    int n=nums.size();
    for (int i=0; i<n; i++){
        int begin = nums[i];
        while (i+1<n && nums[i] == nums[i+1]-1)
            i++;
        int end = nums[i];
        if (begin == end){
            ans.push_back(to_string(begin));
        }
        else{
            ans.push_back(to_string(begin) + "->" + to_string(end));
        }
    }
    return ans;
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

    vector<string>res = summaryRanges(vec);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<"  ";
    }

}