#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void  waveForm(vector<vector<int>>& vect, int row, int col){
    for(int i=0;i<col;i++){
        if(i%2==0){
            for(int j=0;j<row;j++){
                cout<<vect[i][j]<<" ";
            }
        }
        else{
            for(int j=row-1;j>=0;j--){
                cout<<vect[i][j]<<" ";
            }
        }
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

    waveForm(vect, n, m);
    
    return 0;
}