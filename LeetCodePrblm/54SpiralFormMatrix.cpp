#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


// time complexity of (row*col) and space complexity is O(1)
void spiralForm(vector<vector<int>>& vect, int row, int col){
    int top=0,bottom=row-1,right=col-1,left=0;
    while(top<=bottom && left<=right){
        for(int j=left;j<=right;j++){
        cout<<vect[top][j]<<" ";
        }
        top++;
        for(int i=top;i<=bottom;i++){
            cout<<vect[i][right]<<" ";
        }
        right--;
        if(top<=bottom){
            for(int k=right;k>=left;k--){
            cout<<vect[bottom][k]<<" ";
            }
        }
        bottom--;
        if(left<=right){
            for(int l=bottom;l>=top;l--){
            cout<<vect[l][left]<<" ";
            }
        }
        left++;
    }
}

int main(){
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

    spiralForm(vect, n, m);

    return 0;
}