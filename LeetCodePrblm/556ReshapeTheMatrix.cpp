#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> Reshape(vector<vector<int>> &mat, int r, int c){
    int n=mat.size(),m=mat[0].size();
    if(m*n!=r*c){
        return mat;
    }

    vector<vector<int>> ans(r,vector<int>(c));
    for(int i=0;i<n*m;i++){
// Calculate the new row index in the reshaped matrix
        int newRow = i / c;
// Calculate the new column index in the reshaped matrix
        int newCol = i % c;
// Calculate the corresponding row index in the original matrix
        int originalRow = i / m;
// Calculate the corresponding column index in the original matrix
        int originalCol = i % m;
// Place the element from the original matrix to the correct position in the reshaped matrix
        ans[newRow][newCol] = mat[originalRow][originalCol];
    }

    return ans;
}


int main(){
    int row,col;
    cout<<"Enter the number of rows in the Matrix:";
    cin>>row;
    cout<<"Enter the number of coloumns in the Matrix:";
    cin>>col;

    vector<vector<int>>mat(row,vector<int>(col));
    cout<<"Enter the values in the vector:"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"Enter the "<<i<<j<<"th Element:";
            cin>>mat[i][j];
        }
    }

    int r,c;
    cout<<"Enter the number of rows in reshaped Matrix:";
    cin>>r;
    cout<<"Enter the number of column in reshaped Matrix:";
    cin>>c;
    vector<vector<int>> res=Reshape(mat, r, c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
