#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of Array:";
    cin>>n;

    int arr[n];
    for (int i=0; i<n; i++){
        cout<<"Enter the "<<i<<"th Element:";
        cin>>arr[i];
    }

    cout<<"Array before rotation: ";
    for (int i = 0; i < n; i++){
        cout<<arr[i]<< " ";
    }

    int temp=arr[n-1];
    for (int i=n-2; i>=0; i--){
        arr[i+1]=arr[i];
    }
    arr[0]=temp;
    cout<<"\nArray after rotation: ";
    for (int i = 0; i < n; i++){
        cout<<arr[i]<< " ";
    }
}