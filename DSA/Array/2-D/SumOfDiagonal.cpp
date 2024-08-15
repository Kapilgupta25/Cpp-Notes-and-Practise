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

// //TIME COMPLEXITY OF ORDER O(row*col)
//     int diagSum=0;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             if(i==j){
//                 diagSum+=arr[i][j];
//             }
//             else if(i+j==col-1 && i!=j){
//                 diagSum+=arr[i][j];
//             }
//         }
//     }


    int diagSum=0;
    for(int i=0;i<row;i++){
        diagSum+=arr[i][i];
    }
    int i=0,j=col-1;
    while(j>=0){
        diagSum+=arr[i][j];
        i++;
        j--;
    }
    
    cout<<diagSum<<" is the sum of Diagonal Elements of the matrix"<<endl;
    return 0;
}
