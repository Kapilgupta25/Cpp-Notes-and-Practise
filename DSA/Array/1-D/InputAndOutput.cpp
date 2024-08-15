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

    cout<<"The Inputed Array is: ";

    for (int i = 0; i < n; i++){
        cout<<arr[i]<< " ";
    }
    
}
