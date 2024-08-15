#include<iostream>
using namespace std;

int twoDifference(int arr[], int n, int target){
    int start=0,end=1;
    while(end<n){
        if(arr[start]+arr[end]==target){
            return 1;
        }
        else if(arr[start]+arr[end]<target){
            end++;
        }
        else{
            start++;
        }
    }
    return 0;
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


    int key;
    cout<<"Enter the Sum you want to find:";
    cin>>key;
    int ans = twoDifference(arr, n, key);
    if(ans==1){
        cout<<key<<" sum is present in the array";
    }
    else{
        cout<<key<<" sum is not present in the array";
    }

    return 0;
}
