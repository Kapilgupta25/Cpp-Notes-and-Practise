#include<iostream>
using namespace std;

int BookAllocation(int arr[], int n, int m){
// if distribution is not possible
    if(m>n){
        return -1;
    }

    int start=0, end=n-1, mid,index;
//start=max of arr[] and end=sum of all elements of arr[] 
    for (int i=0; i<n; i++){
        start=max(start,arr[i]);
        end+=arr[i];
    }
    
// code for distribution
    while(start<=end){
        mid=start+(end-start)/2;
        int page=0,count=1;
        for(int i=0;i<n;i++){
            page+=arr[i];
            if(page>mid){
                count++;
                page=arr[i];
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
    cout<<"Enter the number among which we have to distribute the pages:";
    cin>>key;
    int ans = BookAllocation(arr, n, key);
    cout<<ans<<" is the number of pages that can be distributed for minimum difference.";

    return 0;
}