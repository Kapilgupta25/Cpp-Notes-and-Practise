#include<iostream>
using namespace std;


int main(){
    int row,col;
    cout<<"Enter the number of rows in the Array:";
    cin>>row;
    cout<<"Enter the number of coloumns in the Array:";
    cin>>col;

    int arr[row][col];
    for (int i=0; i<row; i++){
        for(int j=0;j<col;j++){
            cout<<"Enter the "<<i<<j<<"th Element:";
            cin>>arr[i][j];
        }
    }

    cout<<"Matrix before Reversed Row:\n";
    for (int i=0; i<row; i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<" "<<endl;
    }

    for(int i=0;i<row;i++){
        int start=0,end=col-1;
        while(start<end){
            swap(arr[i][start],arr[i][end]);
            start++;
            end--;
        }
    }

    cout<<"Matrix after Reversed Row:\n";
    for (int i=0; i<row; i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<" "<<endl;
    }

    return 0;
}
