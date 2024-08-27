#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

// time complexity of O(2^n) and space complexity of O(n)
int PerfectSum(int arr[], int index, int n, int target){
    if(index==n){
        return target==0;
        // if(target==0){
        //     return 1;
        // }
        // else{
        //     return 0;
        // }  
    }

    return PerfectSum(arr, index+1, n, target)+PerfectSum(arr, index+1, n, target-arr[index]);
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
    int ans=PerfectSum(arr, 0, n, target);
    cout<<target<<" occurs "<<ans<<" times as perfect sum.";
    return 0;

}