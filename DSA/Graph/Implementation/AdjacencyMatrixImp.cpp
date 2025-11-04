#include<iostream>
#include<vector>
using namespace std;


//        // undirected unweighted graph using adjacency matrix

// int main(){
//     int vertex, edges;
//     cout << "Enter the number of vertices: ";
//     cin >> vertex;
//     cout << "Enter the number of edges: ";
//     cin >> edges;
    
//     vector<vector<bool>> adjMatrix(vertex, vector<bool>(vertex, 0));

//     int u, v;
//     for(int i=0; i<edges; i++){
//         cin >> u >> v;
//         if(u<vertex && v<vertex && u>=0 && v>=0){
//             adjMatrix[u][v] = 1;
//             adjMatrix[v][u] = 1;                // uncomment this line for directed graph
//         }
//         else {
//             cout << "Invalid edge: " << u << " -> " << v << endl;
//         }
//     }

//     cout << "Adjacency Matrix:" << endl;    
//     for(int i=0; i<vertex; i++){
//         for(int j=0; j<vertex; j++){
//             cout << adjMatrix[i][j] << " ";
//         }
//         cout << endl;
//     }
// }




// undirected weighted graph using adjacency matrix

int main(){
    int vertex, edges;
    cout << "Enter the number of vertices: ";
    cin >> vertex;
    cout << "Enter the number of edges: ";
    cin >> edges;
    
    vector<vector<int>> adjMatrix(vertex, vector<int>(vertex, 0));

    int u, v, weight;
    for(int i=0; i<edges; i++){
        cin >> u >> v >> weight;
        if(u<vertex && v<vertex && u>=0 && v>=0){
            adjMatrix[u][v] = weight;
            adjMatrix[v][u] = weight;             // uncomment this line for directed graph
        }
        else {
            cout << "Invalid edge: " << u << " -> " << v << endl;
        }
    }

    cout << "Adjacency Matrix:" << endl;    
    for(int i=0; i<vertex; i++){
        for(int j=0; j<vertex; j++){
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }
}
