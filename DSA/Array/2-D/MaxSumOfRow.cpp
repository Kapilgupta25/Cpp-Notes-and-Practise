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

    int maxSum=INT32_MIN,rowIndex;
    for(int i=0;i<row;i++){
        int eachSum=0;
        for(int j=0;j<col;j++){
            eachSum+=arr[i][j];
        }
        if(eachSum>=maxSum){
            maxSum=eachSum;
            rowIndex=i;
        }
    }
    
    cout<<maxSum<<" is the maximum sum of "<<rowIndex<<"th Row"<<endl;
    return 0;
}
