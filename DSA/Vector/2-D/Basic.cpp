#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
// vector<vector<int>>matrix(rows, vector<int>(Column, initilize));
    vector<vector<int>>matrix(3,vector<int>(4,1));

// taking input from user
    int n,m;
    cout<<"Enter the number of rows:";
    cin>>n;
    cout<<"Enter the numbers of columns:";
    cin>>m;

    vector<vector<int>>vect(n,vector<int>(m));
    cout<<"Enter the values in the vector:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Enter the "<<i<<j<<"th Element:";
            cin>>vect[i][j];
        }
    }

// for number of rows in the matrix
    int rows=matrix.size();

// for number of column in the matrix
    int col=matrix[0].size();

    cout<<"Rows:"<<rows<<endl;
    cout<<"Columns:"<<col<<endl;

// output of 2-D vector
    cout<<"The 2-D vector is:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<vect[i][j]<<" ";
        }
        cout<<" "<<endl;
    }



}