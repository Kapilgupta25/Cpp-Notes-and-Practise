#include<iostream>
using namespace std;

int shipPackages(int arr[], int n, int m){
    int start=0, end=n-1, mid,index;
//start=max of arr[] and end=sum of all elements of arr[] 
    for (int i=0; i<n; i++){
        start=max(start,arr[i]);
        end+=arr[i];
    }
    
// code for distribution
    while(start<=end){
        mid=start+(end-start)/2;
        int boatWeight=0,count=1;
        for(int i=0;i<n;i++){
            boatWeight+=arr[i];
            if(boatWeight>mid){
                count++;
                boatWeight=arr[i];
            }
        }
        if(count<=m){
            index=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return index;
}


//STARTING OF MAIN FUNCTION

int main(){
    int n;
    cout<<"Enter the size of Array:";
    cin>>n;

    int arr[1000];
    for (int i=0; i<n; i++){
        cout<<"Enter the "<<i<<"th Element:";
        cin>>arr[i];
    }


// Binary Search
    int key;
    cout<<"Enter the number number of days taken:";
    cin>>key;
    int ans = shipPackages(arr, n, key);
    cout<<ans<<" is the minimun boat capacity.";

    return 0;
}