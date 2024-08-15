#include<iostream>
using namespace std;

// // time complexity of O(row+log(col)) and space complexity of (1)
// int binarySearch(int arr[][100], int row, int col, int target){
//     for(int i=0;i<row;i++){
//         if(arr[i][0]<=target && target<=arr[i][col-1]){
//             int start=0, end=col-1;
//             while(start<=end){
//                 int mid=(end+start)/2;
//                 if(arr[i][mid]==target){
//                     return 1;
//                 }
//                 else if(arr[i][mid]<target){
//                     start=mid+1;
//                 }
//                 else{
//                     end=mid-1;
//                 }
//             }
//         }
//     }
//     return 0;
// }


// time complexity of O(log(row*col)) and space complexity of (1)
int binarySearch(int arr[][100], int row, int col, int target){
    int start=0,end=row*col-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        int rowIndex=mid/col, colIndex=mid%col;
        if(arr[rowIndex][colIndex]==target){
            return 1;
        }
        else if(arr[rowIndex][colIndex]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return 0;
}


int main(){
    int n,m;
    cout<<"Enter the number of rows in the Array:";
    cin>>n;
    cout<<"Enter the number of coloumns in the Array:";
    cin>>m;

    int arr[n][100];
    for (int i=0; i<n; i++){
        for(int j=0;j<m;j++){
            cout<<"Enter the "<<i<<j<<"th Element:";
            cin>>arr[i][j];
        }
    }

    int target;
    cout<<"Enter the element to search:";
    cin>>target;
    int ans=binarySearch(arr, n, m, target);
    if(ans==1){
        cout<<target<<" is present in the matrix";
    }
    else{
        cout<<target<<" is not present in the matrix";
    }

    return 0;
}
