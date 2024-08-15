#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of Array:";
    cin>>n;

    int arr[1000];
    for (int i=0; i<n; i++){
        cout<<"Enter the "<<i<<"th Element:";
        cin>>arr[i];
    }
    cout<<"Array before sorting is: ";
    for (int i = 0; i < n; i++){
        cout<<arr[i]<< " ";
    }

// Bubble Sort: here we compare the "j"th and "j+1"th element of the array and do sorting on the basis of them, we run (n-1) rounds.
//  Bubble sort have Time Complexity in best case is O(n) and in (average,worst) case is O(n^2) and Space Complexity of O(1)

    bool swappedAsc=false;
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swappedAsc=true;
            }
            if(swappedAsc==false){
                break;
            }
        }   
    }
    cout<<"\nArray sorted in ascending Order: ";
    for (int i = 0; i < n; i++){
        cout<<arr[i]<< " ";
    }

    bool swappedDesc=false;
    for (int i=n-2; i>=0; i--){
        for (int j=0; j<=i; j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
                swappedDesc=true;
            }
            if(swappedDesc==false){
                break;
            }
        }   
    }
    cout<<"\nArray sorted in descending Order: ";
    for (int i=0; i<n; i++){
        cout<<arr[i]<< " ";
    }

    return 0;
}