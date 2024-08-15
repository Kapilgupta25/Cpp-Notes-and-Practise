#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


void mergeSortAddition(int arr[], int start, int mid, int end){ 
    vector<int> temp(end-start+1);
    int left=start,right=mid+1,index=0;
    while(left<=mid && right<=end){
        if(arr[left]<=arr[right]){
            temp[index]=arr[left];
            index++,left++;
        }
        else{
            temp[index]=arr[right];
            index++,right++;
        }
    }
    // if left side array is larger then right side array
    while(left<=mid){
        temp[index]=arr[left];
        index++,left++;
    }
    // if right side array is larger then left side array
    while(right<=end){
        temp[index]=arr[right];
        index++,right++;
    }

    // now fill elements to the original array using temp vector
    index=0;
    while(start<=end){
        arr[start]=temp[index];
        start++,index++;
    }
}


void mergeSortDivision(int arr[], int start, int end){
    if(start==end){
        return;                          // base condition if array is converted into elements
    }
    int mid=start+(end-start)/2;
// Division of array into element
    mergeSortDivision(arr, start, mid);    // for left part of the array
    mergeSortDivision(arr, mid+1, end);    // for end part of the array
// Adding the elements into array after sorting
    mergeSortAddition(arr, start, mid, end);

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
    cout<<"Array before sorting is: ";
    for (int i = 0; i < n; i++){
        cout<<arr[i]<< " ";
    }


// Merge Sort: ismein hm puri array ko pahale divide krte hai jabtak single element na raha jaye or uske baad usko sort krte hue merge krte hai
// Time Complexity of O(n*log(n)) and Space Complexity of O(n)

    mergeSortDivision(arr, 0, n-1);

    cout<<"\nArray sorted in ascending Order: ";
    for (int i = 0; i < n; i++){
        cout<<arr[i]<< " ";
    }

    return 0;
}