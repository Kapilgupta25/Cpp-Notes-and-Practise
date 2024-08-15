#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


vector<int> productExceptSelf(vector<int>& nums) {
    int n=nums.size();
    vector<int>prefix;
    vector<int>suffix;
    int mul=1;
    for(int i=0;i<n;i++){
        prefix.push_back(nums[i]*mul);
        mul=mul*nums[i];
    }
        
    mul=1;
    for(int i=n-1;i>=0;i--){
        suffix.push_back(mul*nums[i]);
        mul=mul*nums[i];
    }
    reverse(suffix.begin(),suffix.end());

    vector<int>ans(n,0);
    ans[0]=suffix[1];
    ans[n-1]=prefix[n-2];
            
    for(int i=1;i<n-1;i++){        
        ans[i]=(suffix[i+1]*prefix[i-1]);    
    }
    return ans;
};


int main(){
    int n;
    cout<<"Enter the size of vector:";
    cin>>n;

    vector<int>vec(n);
    for (int i=0; i<n; i++){
        cout<<"Enter the "<<i<<"th Element:";
        cin>>vec[i];
    }

    vector<int>res = productExceptSelf(vec);
    cout<<"The Prefix sum is: ";
    for(int i=0;i<n;i++){
        cout<<res[i]<<" "; 
    }
    return 0;
}
