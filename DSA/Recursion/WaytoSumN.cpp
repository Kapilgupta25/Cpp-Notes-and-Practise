#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


int WaystoSum(int arr[], int n, int target){
    if(target==0){
        return 1;
    }
    if(target<0){
        return 0;
    }

    int ans=0;
    for(int i=0;i<n;i++){
        ans+=WaystoSum(arr, n, target-arr[i]);
    }

    return ans;
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
    cout<<"Enter the target value of Sum:";
    cin>>target;
    int ans=WaystoSum(arr, n, target);
    cout<<ans<<" Ways to get sum equal to "<<target;
    return 0;

}