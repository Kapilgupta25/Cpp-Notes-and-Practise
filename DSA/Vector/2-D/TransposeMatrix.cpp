#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


// time complexity of (row*col) and space complexity is O(1)
void transpose(vector<vector<int>>& vect, int row, int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i<j){
                swap(vect[i][j],vect[j][i]);
            }
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<vect[i][j]<<" ";
        }
        cout<<" "<<endl;
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

    transpose(vect, n, m);

    return 0;
}