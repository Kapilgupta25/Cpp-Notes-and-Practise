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

    cout<<"Original Array is: ";
    for (int i = 0; i < n; i++){
        cout<<arr[i]<< " ";
    }

// // using another array of same size
//     int temp[n];
//     int i=n-1,j=0;
//     while(i>=0){
//         temp[j]=arr[i];
//         j++;
//         i--;
//     }


//     cout<<"\nReversed Array is: ";
//     for (int i = 0; i < n; i++){
//         cout<<temp[i]<< " ";
//     }

// Without using another array

    int i=0,j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    cout<<"\nReversed Array is: ";
    for (int i = 0; i < n; i++){
        cout<<arr[i]<< " ";
    }
}
