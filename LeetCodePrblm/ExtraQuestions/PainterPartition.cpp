#include<iostream>
using namespace std;

long long PainterPartion(int arr[], int n, int m){
    long long start=0, end=n-1, mid,index;
//start=max of arr[] and end=sum of all elements of arr[] 
    for (int i=0; i<n; i++){
        if(start<arr[i]){
            start=arr[i];
        }
        end+=arr[i];
    }
    
// code for distribution
    while(start<=end){
        mid=start+(end-start)/2;
        long long wallLength=0,count=1;
        for(int i=0;i<n;i++){
            wallLength+=arr[i];
            if(wallLength>mid){
                count++;
                wallLength=arr[i];
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
    int ans = PainterPartion(arr, n, key);
    cout<<ans<<" is the minimun time taken by the painter to paint the walls.";

    return 0;
}