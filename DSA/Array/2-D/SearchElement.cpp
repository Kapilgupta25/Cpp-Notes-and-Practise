#include<iostream>
using namespace std;


int main(){
    int n,m;
    cout<<"Enter the number of rows in the Array:";
    cin>>n;
    cout<<"Enter the number of coloumns in the Array:";
    cin>>m;

    int arr[n][m];
    for (int i=0; i<n; i++){
        for(int j=0;j<m;j++){
            cout<<"Enter the "<<i<<j<<"th Element:";
            cin>>arr[i][j];
        }
    }

    int target;
    cout<<"Enter the element to search:";
    cin>>target;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==target){
                cout<<target<<" is present in the matrix.";
                return 0;
            }
        }
    }

    cout<<target<<" is not present in the matrix.";
    return 0;
}
