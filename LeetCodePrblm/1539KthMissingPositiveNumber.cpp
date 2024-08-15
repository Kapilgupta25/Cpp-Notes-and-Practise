#include<iostream>
using namespace std;

int MissingNumber(int arr[], int n, int key){
    int start=0, end=n-1, mid,index=n;
    while(start<=end){
        mid=start+(end-start)/2;
            
        if(arr[mid]-mid-1<key){
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
    int key;
    cout<<"Enter the Kth missing element in the array:";
    cin>>key;
    int ans = MissingNumber(arr, n, key);
    cout<<ans+key<<" is the "<<key<<"th missing element in the array.";

    return 0;
}