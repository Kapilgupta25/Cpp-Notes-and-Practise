#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

// void SubsetSum(vector<int>& vec, int index, int n, int &res, int sum){
//     if(index==n){
//         res+=sum;
//         return;
//     }

// // if we reject the element thus we only need to increase the value of index
//     SubsetSum(vec, index+1, n, res, sum);
// // if we take the element thus we need to push that element in the temp array and then increase the index
//     sum+=vec[index];
//     SubsetSum(vec, index+1, n, res, sum);

// }


// int main(){
//     int n;
//     cout<<"Enter the size of vector:";
//     cin>>n;
//     vector<int>vec(n);
//     for (int i=0; i<n; i++){
//         cout<<"Enter the "<<i<<"th Element:";
//         cin>>vec[i];
//     }

//     int res=0;
//     SubsetSum(vec, 0, n, res, 0);
//     cout<<"The Sum of all the Subsets is:"<<res<<endl;
//     return 0;

// }


// time complexity of O(2^n) and space complexity of O(n)
void SubsetSum(vector<int>& vec, int index, int n, vector<vector<int>> &res, int &sum, vector<int> &temp){
    if(index==n){
        temp.push_back(sum);
        res.push_back(temp);
        return;
    }

// if we reject the element thus we only need to increase the value of index
    SubsetSum(vec, index+1, n, res, sum, temp);
// if we take the element thus we need to push that element in the temp array and then increase the index
    sum+=vec[index];
    temp.push_back(vec[index]);
    SubsetSum(vec, index+1, n, res, sum, temp);
    temp.pop_back();
    sum=0;
}


int main(){
    int n,sum=0;
    cout<<"Enter the size of vector:";
    cin>>n;
    vector<int>vec(n);
    for (int i=0; i<n; i++){
        cout<<"Enter the "<<i<<"th Element:";
        cin>>vec[i];
    }

    vector<vector<int>> res;
    vector<int> temp;
    SubsetSum(vec, 0, n, res, sum, temp);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}