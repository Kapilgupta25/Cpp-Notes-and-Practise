#include<iostream>
using namespace std;


// // time complexity of 0(n^2)
// int maxDifferenceElement(int arr[], int n){
//     int maxi=INT32_MIN;
//     for(int i=0; i<n; i++){
//         for(int j=i+1;j<n;j++){
//             maxi=max(arr[j]-arr[i],maxi);
//         }
//     }
//     return maxi;
// }

//------------------------------------------------------------

// // time complexity of 0(n)
// int maxDifferenceElement(int arr[], int n){
//     int str[n],suffix=arr[n-1],maxi=INT32_MIN;
//     str[n-1]=suffix;
//     for(int i=n-2;i>=0;i--){
//         str[i]=max(arr[i],str[i+1]);
//     }

//     for(int i=0;i<n-1;i++){
//         int diff=str[i+1]-arr[i];
//         maxi=max(maxi,diff);
//     }

//     return maxi;
// }

//----------------------------------------------------------------

//  Best space as well as time complexity
int maxDifferenceElement(int arr[], int n){
    int suffix=arr[n-1],maxi=INT32_MIN;
    for(int i=n-2;i>=0;i--){
        maxi=max(maxi,suffix-arr[i]);
        suffix=max(suffix,arr[i]);
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

    int ans=maxDifferenceElement(arr, n);
    cout<<ans<<" is the maximum difference betwwen two element present in the array.";


    return 0;
}
