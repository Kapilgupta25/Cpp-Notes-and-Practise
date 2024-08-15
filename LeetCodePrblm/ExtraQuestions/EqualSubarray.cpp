#include<iostream>
using namespace std;

int equalSubarray(int arr[], int n){
    int totalSum=0,prefix=0,ans;
    for(int i=0;i<n;i++){
        totalSum+=arr[i];
    }
    for(int i=0;i<n;i++){
        prefix+=arr[i];
        ans=totalSum-prefix;
        if(ans==prefix){
            return 1;
        }
    }
    return 0;
}


int main(){
    int n;
    cout<<"Enter the size of Array:";
    cin>>n;

    int arr[1000];
    for (int i=0; i<n; i++){
        cout<<"Enter the "<<i<<"th Element:";
        cin>>arr[i];
    }

    int res = equalSubarray(arr, n);
    if(res==1){
        cout<<"we can divide the array into two subarray of equal sum.";
    }
    else{
        cout<<"we can not divide the array..";

    }

    return 0;
}
