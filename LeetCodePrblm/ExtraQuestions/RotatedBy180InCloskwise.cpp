#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



// time complexity of (row*col) and space complexity is O(1)
void Rotate180InClockwise(vector<vector<int>>& vect, int row, int col){
    // first we have to reverse the order of each row
    int start=0,end=row-1;
    while(start<end){
        for(int i=0;i<col;i++){
            swap(vect[start][i],vect[end][i]);
        }
        start++;
        end--;
    }

    // reverse elements of each row
    for(int i=0;i<row;i++){
        int start=0,end=col-1;
        while(start<end){
            swap(vect[i][start],vect[i][end]);
            start++;
            end--;
        }
    }

    cout<<"Matrix after 180 rotation in clockwise direction :"<<endl;
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
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

    Rotate180InClockwise(vect, n, m);

    return 0;
}