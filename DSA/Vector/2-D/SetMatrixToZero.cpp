#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void SetToZero(vector<vector<int>>& vect, int row, int col){
    vector<int> arr(row*col);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(vect[i][j]==0){
                arr.push_back(i*10+j);
            }
        }
    }

// making row zero
    int n=arr.size();
    for(int i=0;i<n;i++){
        int ZeroRowIndex=arr[i]/10;
        for(int j=0;i<col;j++){
            vect[ZeroRowIndex][j]=0;
        }
    }

// making column zero
    for(int i=0;i<n;i++){
        int ZeroColIndex=arr[i]%10;
        for(int j=0;i<row;j++){
            vect[j][ZeroColIndex]=0;
        }
    }

    cout<<"Matrix after Setting to zero:"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<vect[i][j]<<" ";
        }
        cout<<" "<<endl;
    }
}


int main(){
    int row,col;
    cout<<"Enter the number of rows:";
    cin>>row;
    cout<<"Enter the numbers of columns:";
    cin>>col;

    vector<vector<int>>vect(row,vector<int>(col));
    cout<<"Enter the values in the vector:"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"Enter the "<<i<<j<<"th Element:";
            cin>>vect[i][j];
        }
    }

    SetToZero(vect, row, col);

    return 0;
}