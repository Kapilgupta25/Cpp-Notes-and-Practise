#include<iostream>
#include<vector>
using namespace std;


//        // undirected unweighted graph using adjacency list


// int main(){
//     int vertex, edges;
//     cout<< "Enter the number of vertices: ";
//     cin >> vertex;
//     cout<< "Enter the number of edges: ";
//     cin >> edges;

//     vector<vector<int>> adjList(vertex);
//     int u, v;
//     for(int i=0; i<edges; i++){
//         cin >> u >> v;
//         if(u < vertex && v < vertex && u >= 0 && v >= 0){
//             adjList[u].push_back(v);
//             adjList[v].push_back(u); // uncomment this line for directed graph
//         }
//         else {
//             cout << "Invalid edge: " << u << " -> " << v << endl;
//         }
//     }

//     cout << "Adjacency List:" << endl;
//     for(int i=0; i<vertex; i++){
//         cout << i << ": ";
//         for(int j=0; j<adjList[i].size(); j++){
//             cout << adjList[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }




//    // undirected weighted graph using adjacency list

int main(){
    int vertex, edges;
    cout<< "Enter the number of vertices: ";
    cin >> vertex;
    cout<< "Enter the number of edges: ";
    cin >> edges;

    vector<vector<pair<int, int>>> adjList(vertex);
    int u, v, weight;
    for(int i=0; i<edges; i++){
        cin >> u >> v >> weight;
        if(u < vertex && v < vertex && u >= 0 && v >= 0){
            adjList[u].push_back(make_pair(v, weight));
            adjList[v].push_back(make_pair(u, weight)); // uncomment this line for directed graph
        }
        else {
            cout << "Invalid edge: " << u << " -> " << v << endl;
        }
    }

    cout << "Adjacency List:" << endl;
    for(int i=0; i<vertex; i++){
        cout << i << ": ";
        for(int j=0; j<adjList[i].size(); j++){
            cout << adjList[i][j].first << " " << adjList[i][j].second << " "; // print vertex and weight
        }
        cout << endl;
    }

    return 0;
}