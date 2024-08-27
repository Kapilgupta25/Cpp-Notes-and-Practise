#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool valid(int i, int j, int n){
    return i>=0&&j>=0&&i<n&&j<n;
}

int row[4]={-1,1,0,0};
int col[4]={0,0,-1,1};
string dir="UDLR";

void RatInMaze(vector<vector<int>> &matrix, int i, int j, int n, string&path, vector<string>&ans, vector<vector<bool>>&visited){
    if(i==n-1&&j==n-1){
        ans.push_back(path);
        return;
    }

    visited[i][j]=1;


    for(int k=0;k<4;k++){
        if(valid(i+row[k],j+col[k],n)&&matrix[i+row[k]][j+col[k]]&&!visited[i+row[k]][j+col[k]]){
            path.push_back(dir[k]);
            RatInMaze(matrix,i+row[k],j+col[k],n,path,ans,visited);
            path.pop_back();
        }
    }

    visited[i][j]=0;

// above code is the better approch for writting the below code
    // //UP
    // if(valid(i-1,j,n)&&matrix[i-1][j]&&!visited[i-1][j]){
    //     path.push_back("U");
    //     RatInMaze(matrix,i-1,j,n,path,ans,visited)
    // }
    // //DOWN
    // if(valid(i+1,j,n)&&matrix[i+1][j]&&!visited[i+1][j]){
    //     path.push_back("D");
    //     RatInMaze(matrix,i+1,j,n,path,ans,visited)
    // }
    // //LEFT
    // if(valid(i,j-1,n)&&matrix[i][j-1]&&!visited[i][j-1]){
    //     path.push_back("L");
    //     RatInMaze(matrix,i,j-1,n,path,ans,visited)
    // }
    // //RIGHT
    // if(valid(i,j+1,n)&&matrix[i][j+1]&&!visited[i][j+1]){
    //     path.push_back("R");
    //     RatInMaze(matrix,i,j+1,n,path,ans,visited)
    // }
}


int main(){
    int row,col;
    cout<<"Enter the number of rows in the Matrix:";
    cin>>row;
    cout<<"Enter the number of coloumns in the Matrix:";
    cin>>col;

    vector<vector<int>>matrix(row,vector<int>(col));
    cout<<"Enter the values in the vector:"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"Enter the "<<i<<j<<"th Element:";
            cin>>matrix[i][j];
        }
    }

    string path;
    vector<string> ans;
    vector<vector<bool>> visited(row,vector<bool>(col,0));

    if(matrix[0][0]==0||matrix[row-1][col-1]==0){
        cout<<"0 number of Possible Ways are there."<<endl;
        return 0;
    }

    RatInMaze(matrix,0,0,row, path, ans, visited);
    cout<<"Number of Possible Ways are :"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}
