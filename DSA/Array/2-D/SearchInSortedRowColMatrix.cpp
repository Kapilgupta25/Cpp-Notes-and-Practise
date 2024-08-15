#include<iostream>
using namespace std;


// time complexity of O(row+col) and space complexity of (1)
int SearchElement(int arr[][100], int row, int col, int target){
    int rowIndex=0, colIndex=col-1;
    while(rowIndex<row && colIndex>=0){
        if(arr[rowIndex][colIndex]==target){
            return 1;
        }
        else if(arr[rowIndex][colIndex]>target){
            colIndex--;
        }
        else{
            rowIndex++;
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
    int ans=SearchElement(arr, n, m, target);
    if(ans==1){
        cout<<target<<" is present in the matrix";
    }
    else{
        cout<<target<<" is not present in the matrix";
    }

    return 0;
}
