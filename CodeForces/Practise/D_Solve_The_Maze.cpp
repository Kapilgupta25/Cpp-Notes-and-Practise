#include<bits/stdc++.h>
using namespace std;


bool block_Bad(vector<vector<char>>& maze, vector<vector<bool>>& visited, int x, int y, int& cntG, int n, int m) {

}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin>>n;
        cin>>m;
        vector<vector<char>> maze(n, vector<char>(m));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> maze[i][j];
            }
        }

        vector<vector<bool>> visited(n, vector<bool>(m, false));
        int cntG = 0;
        if(block_Bad(maze, visited, 0, 0, cntG, n, m)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }
    return 0;
}
