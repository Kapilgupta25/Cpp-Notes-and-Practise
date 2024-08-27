#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

// time complexity of O(2^n) and space complexity of O(n)
bool TargetSum(int arr[], int index, int n, int target){
    if(target==0){
        return 1;
    }
    if(index==n || target<0){
        return 0;
    }

    return TargetSum(arr, index+1, n, target) || TargetSum(arr, index+1, n, target-arr[index]);
}


int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cout<<"Enter the "<<i<<"th Element:";
        cin>>arr[i];
    }

    int target;
    cout<<"Enter the target value of sum:";
    cin>>target;
    if(TargetSum(arr, 0, n, target)==1){
        cout<<target<<" is present in the array";
    }
    else{
        cout<<target<<" is not present in the array";
    }
    return 0;

}
