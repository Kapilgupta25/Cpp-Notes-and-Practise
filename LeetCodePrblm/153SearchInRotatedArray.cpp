#include<iostream>
using namespace std;

int MinElement(int arr[], int n){
    int start=0, end=n-1, mid,index=0;
    while(start<=end){
        mid=start+(end-start)/2;
            
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            index=mid;
            end=mid-1;
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
    int ans = MinElement(arr, n);
    cout<<arr[ans]<<" is the minimum element present at "<<ans<<" index in the rotated array.";

    return 0;
}