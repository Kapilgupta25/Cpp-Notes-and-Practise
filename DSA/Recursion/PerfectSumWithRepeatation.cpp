#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


int PerfectSum(int arr[], int index, int n, int target){
    if(target==0){
        return 1; 
    }
    if(index==n || target<0){
        return 0;
    }

    return PerfectSum(arr, index+1, n, target)+PerfectSum(arr, index, n, target-arr[index]);
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
    cout<<target<<" occurs "<<ans<<" times as perfect sum with repetation.";
    return 0;

}