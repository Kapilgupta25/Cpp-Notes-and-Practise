#include<iostream>
using namespace std;


// // time complexity of O(n^2)
// int subArray(int arr[], int n){
//     int maxi=INT32_MIN;
//     for(int i=0; i<n; i++){
//         int prefix=0;
//         for(int j=i;j<n;j++){
//             prefix+=arr[j];
//             maxi=max(prefix,maxi);
//         }
//     }
//     return maxi;
// }


// Kadane's Algorithum of Time Complexitiy O(n) >>> here if prefix<0 then prefix=0
int subArray(int arr[], int n){
    int prefix=0,maxi=INT32_MIN;
    for(int i=0;i<n;i++){
        prefix+=arr[i];
        maxi=max(maxi,prefix);
        if(prefix<0){
            prefix=0;
        }
    }
    return maxi;
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

    int ans=subArray(arr, n);
    cout<<ans<<" is the largest sum of the contigious subarray.";


    return 0;
}
