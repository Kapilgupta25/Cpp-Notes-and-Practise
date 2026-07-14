#include<bits/stdc++.h>
using namespace std;

vector<int> ans;

void bfs(vector<vector<int>> &adj){
    int v=adj.size();
    queue<int> q;
    q.push(adj[0][0]);
    vector<bool> visited(v, 0);
    visited[adj[0][0]]=1;

    while(!q.empty()){
        int node=q.front();
        q.pop();

        for(int i=0; i<adj[node].size(); i++){
            if(!visited[adj[node][i]]){
                q.push(adj[node][i]);
                visited[adj[node][i]]=1;
            }
        }

        ans.push_back(node);
    }
}

int main(){
    int vertex, edges;
    cout<< "Enter the number of vertices: ";
    cin >> vertex;
    cout<< "Enter the number of edges: ";
    cin >> edges;

    vector<vector<int>> adjList(vertex);
    int u, v;
    for(int i=0; i<edges; i++){
        cin >> u >> v;
        if(u < vertex && v < vertex && u >= 0 && v >= 0){
            adjList[u].push_back(v);
            adjList[v].push_back(u); // uncomment this line for directed graph
        }
        else {
            cout << "Invalid edge: " << u << " -> " << v << endl;
        }
    }

    bfs(adjList);
    
    cout << "BFS Traversal: ";
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
