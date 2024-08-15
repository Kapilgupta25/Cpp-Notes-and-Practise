#include<iostream>
using namespace std;



int threeSum(int arr[], int n, int target){
    for(int i=0;i<n-2;i++){
        // two pointer technique
        int find=target-arr[i];
        int start=i+1,end=n-1;
        while(start<end){
            if(arr[start]+arr[end]==find){
                return 1;
            }
            else if(arr[start]+arr[end]<find){
                start++;
            }
            else{
                end--;
            }
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

    int target;
    cout<<"Enter the target for 3 SUM:";
    cin>>target;
    int ans=threeSum(arr, n, target);
    if(ans==1){
        cout<<target<<" is present as THREE SUM in the array.";
    }
    else{
        cout<<target<<" is not present as THREE SUM in the array.";
    }
    return 0;
}
