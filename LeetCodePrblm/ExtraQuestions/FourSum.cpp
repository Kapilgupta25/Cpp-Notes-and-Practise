#include<iostream>
using namespace std;


int fourSum(int arr[], int n, int target){
    for(int i=0;i<n-3;i++){
        int threeSum=target-arr[i];
        // Apply three sum
        for(int j=i+1;j<n-2;j++){
            // two pointer technique
            int find=threeSum-arr[j];
            int start=j+1,end=n-1;
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
    cout<<"Enter the target for 4 SUM:";
    cin>>target;
    int ans=fourSum(arr, n, target);
    if(ans==1){
        cout<<target<<" is present as FOUR SUM in the array.";
    }
    else{
        cout<<target<<" is not present as FOUR SUM in the array.";
    }
    return 0;
}
