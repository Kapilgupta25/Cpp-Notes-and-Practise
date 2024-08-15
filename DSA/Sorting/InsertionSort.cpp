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


// Insertion Sort: ismein hm ek ek krke elements ko uthate hai or usko jab tak swap krte hai jab tak woh apni sahi jagaha na aa jaye
// Time Complexity in Best case is of O(n) and in (average,worst) case is O(n^2) while Space Complexity is of O(1)
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
    cout<<"\nArray sorted in ascending Order: ";
    for (int i = 0; i < n; i++){
        cout<<arr[i]<< " ";
    }
    
    for (int i=1; i<n; i++){
        for(int j=i; j>0; j--){
            if(arr[j]>arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            else{
                break;
            }
        }
    }
    cout<<"\nArray sorted in descending Order: ";
    for (int i = 0; i < n; i++){
        cout<<arr[i]<< " ";
    }

    return 0;
}