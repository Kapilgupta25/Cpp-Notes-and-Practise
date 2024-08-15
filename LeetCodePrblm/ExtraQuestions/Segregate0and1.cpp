#include<iostream>
using namespace  std;

int main(){
    int n;
    cout<<"Enter the size of Array:";
    cin>>n;

    int arr[1000];
    for (int i=0; i<n; i++){
        cout<<"Enter the "<<i<<"th Element:";
        cin>>arr[i];
    }

    int start=0,end=n-1;
    while(start<end){
        if(arr[end]!=1 && arr[start]!=0){
            swap(arr[end],arr[start]);
            end--;
            start++;
        }
        else if(arr[start]==0 && arr[end]!=1){
           start++;
        }
        else {
            end--;
        }
    }

    cout<<"The segregated array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    
}
