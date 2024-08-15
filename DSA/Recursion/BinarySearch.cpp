#include<iostream>
using namespace std;

int BinarySearch(int arr[], int x, int start, int end){
    int mid=start+(end-start)/2;
    if(start>end){
        return -1;
    }
    if(arr[mid]==x){
        return mid;
    }
    else if(arr[mid]<x){
        return BinarySearch(arr, x, mid+1, end);
    }
    else{
        return BinarySearch(arr, x, start, mid-1);
    }
}

int main(){
    int arr[6]={1,2,3,4,5,6};       // Array in non decreasing order sorted in ascending
    int x;
    cout<<"Enter the target value:";
    cin>>x;

    int ans=BinarySearch(arr, x, 0, 5);
    if(ans==-1){
        cout<<x<<" is not present in the array"<<endl;
    }
    else{
        cout<<x<<" is present at "<<ans<<" index"<<endl;
    }
    return 0;

}