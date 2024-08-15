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

// selection sort: here we select an element and then swap it with the requried index, to sort the array by selection sort we run (n-1) rounds for every element and the time complexity in all the cases(best,average,worst) is O(n^2) and space complexity is O(1)

    for (int i=0; i<n-1; i++){
        int index=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[index]){
                index=j;
            }
        }
        swap(arr[index],arr[i]);
    }
    cout<<"\nArray sorted in ascending Order: ";
    for (int i = 0; i < n; i++){
        cout<<arr[i]<< " ";
    }


    for (int i=0; i<n-1; i++){
    int index=i;
    for(int j=i+1; j<n; j++){
        if(arr[j]>arr[index]){
            index=j;
        }
    }
    swap(arr[index],arr[i]);
    }
    cout<<"\nArray sorted in descending Order: ";
    for (int i = 0; i < n; i++){
        cout<<arr[i]<< " ";
    }

    // Home-Work

    for (int i=0; i<n-1; i++){
        int index=i;
        for(int j=n-i-1; j>0; j--){
            if(arr[j]>arr[index]){
                index=j;
            }
        }
        swap(arr[index],arr[i]);
    }
    cout<<"\nArray sorted in ascending HOMEWORK: ";
    for (int i = 0; i < n; i++){
        cout<<arr[i]<< " ";
    }

    return 0;
}