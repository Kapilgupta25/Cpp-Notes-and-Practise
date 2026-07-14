// #include <bits/stdc++.h>
// using namespace std;

// int n;
// const int MAXA=200005;
// vector<int> adj[MAXA];

// pair<int, int> dfs(int node, int parent, int dist){
//     pair<int, int> res={dist, node};

//     for(int child:adj[node]){
//         if(child==parent) continue;
//         res=max(res, dfs(child, node, dist+1));
//     }

//     return res;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     cin>>n;

//     for(int i=0; i<n-1; i++){
//         int u,v;
//         cin>>u>>v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     auto point1=dfs(1, 0, 0); // 1 is the root

//     auto point2=dfs(point1.second, 0, 0);

//     cout<<point2.first<<endl;
//     return 0;
// }



// applying DP

#include <bits/stdc++.h>
using namespace std;

int n;
const int MAXA=200005;
vector<int> adj[MAXA];
int dp[MAXA];    // height of node
int diameter=0;

void dfs(int v, int parent){
    int max1=0, max2=0;   // top 2 maximum height of node in tree

    for(int u:adj[v]){
        if(u==parent) continue;

        dfs(u, v);

        int depth=dp[u]+1;
        // update max1 and max2
        if(depth>max1){
            max2=max1;
            max1=depth;
        }
        else if(depth>max2){
            max2=depth;
        }

        // upadate diameter
        diameter=max(diameter, max1+max2);

        // store the height of node v
        dp[v]=max1;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n;

    for(int i=0; i<n-1; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, 0);
    cout<<diameter<<endl;
    
    return 0;
}