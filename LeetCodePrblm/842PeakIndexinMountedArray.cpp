#include<iostream>
using namespace std;

int PeakIndex(int arr[], int n){
    int start=0, end=n-1, mid;
    while(start<=end){
        mid=end+(start-end)/2;
            
        if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid]>arr[mid-1]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
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
    int ans = PeakIndex(arr, n);
    cout<<arr[ans]<<" is the peak element present at "<<ans<<" index in the array.";

    return 0;
}