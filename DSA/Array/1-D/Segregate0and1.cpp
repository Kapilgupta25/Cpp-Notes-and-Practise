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

    int count0=0,count1=0;
    for(int i=0; i<n ;i++){
        if(arr[i]==0){
            count0++;
        }
        else{
            count1++;
        }
    }

    for(int i=0; i<n; i++){
        if(i<count0){
            arr[i]=0;
        }
        else{
            arr[i]=1;
        }
    }

    cout<<"The segregated array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    
}
