#include<iostream>
using namespace std;

int InsertedIndex(int arr[], int n, int key){
    int start=0,end=n-1,index=n;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            index=mid;
            return index;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            index=mid;
            end=mid-1;
        }
    }
    return index;
}


//  Starting of MAIN function

int main(){
    int n;
    cout<<"Enter the size of Array:";
    cin>>n;
    int arr[1000];
    for (int i=0; i<n; i++){
        cout<<"Enter the "<<i<<"th Element:";
        cin>>arr[i];
    }

// Insertion Sort:Ascending order
    for (int i=1; i<n; i++){
        for(int j=i; j>0; j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            else{
                break;
            }
        }
    }

// Binary Search
    int key;
    cout<<"Enter the element you want to search:";
    cin>>key;
    int newIndex = InsertedIndex(arr, n, key);
    

    return 0;
}