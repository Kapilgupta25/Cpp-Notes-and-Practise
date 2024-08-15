#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


// // time complexity of (row*col) and space complexity is O(row*col)
// void Rotate90InClockwise(vector<vector<int>>& vect, int row, int col){
//     vector<vector<int>>ans(col,vector<int>(row));
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             ans[j][row-1-i]=vect[i][j];
//         }
//     }

//     for(int i=0;i<col;i++){
//         for(int j=0;j<row;j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<" "<<endl;
//     }
// }


// time complexity of (row*col) and space complexity is O(1)
void Rotate90InClockwise(vector<vector<int>>& vect, int row, int col){
    // first take transpose and then reverse the elements of each row
    for(int i=0;i<row-1;i++){
        for(int j=i+1;j<col;j++){
            swap(vect[i][j],vect[j][i]);
        }
    }

    // reverse each row
    for(int i=0;i<col;i++){
        int start=0,end=row-1;
        while(start<end){
            swap(vect[i][start],vect[i][end]);
            start++;
            end--;
        }

    }

    cout<<"Matrix after 90 rotation in clockwise direction :"<<endl;
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

    Rotate90InClockwise(vect, n, m);

    return 0;
}