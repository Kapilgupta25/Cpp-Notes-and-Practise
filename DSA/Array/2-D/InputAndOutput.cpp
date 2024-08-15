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

    cout<<"The Inputed Array is: "<<endl;

    for (int i=0; i<n; i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<" "<<endl;
    }
    return 0;
    
}
