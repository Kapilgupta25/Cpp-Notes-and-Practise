#include<iostream>
using namespace std;

int FirstOccruence(int arr[], int n, int key){
    int start=0,end=n-1,first=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            first=mid;
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return first;
}

int LastOccurence(int arr[], int n, int key){
    int start=0,end=n-1,last=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            last=mid;
            start=mid+1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return last;
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
    int FO = FirstOccruence(arr, n, key);
    int LO = LastOccurence(arr, n, key);
    if(FO==-1){
        cout<<key<<" is not present in the array.";
    }
    else{
        cout<<"First Postion of "<<key<<" is "<<FO;
        cout<<"\nLast Postion of "<<key<<" is "<<LO;
    }

    return 0;
}