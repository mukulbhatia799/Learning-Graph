#include<iostream>
#include<vector>
using namespace std;

// undirected graph

/*
int main() {
    int n, m, noOfEdges;
    cin >> n >> m >> noOfEdges;

    int adj[n+1][m+1];
    for(int i = 0; i <= n; i++) for(int j = 0; j <= m; j++) adj[i][j] = 0;
    for(int i = 0; i < noOfEdges; i++) {
        int u, v; cin >> u >> v;        // u, v nodes.

        // edges between u and v nodes. As graph is undirected, so u->v and v->u;
        adj[u][v] = 1;      // As there is not edge weight, so default set it as unit 1.
        adj[v][u] = 1;
    }
    
    // displaying matrix;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

*/


// directed graph

int main() {
    int n, m, noOfEdges;
    cin >> n >> m >> noOfEdges;

    int adj[n+1][m+1];
    for(int i = 0; i <= n; i++) for(int j = 0; j <= m; j++) adj[i][j] = 0;
    for(int i = 0; i < noOfEdges; i++) {
        int u, v; cin >> u >> v;        // u, v nodes.

        // edges between u and v nodes. As graph is undirected, so u->v and v->u;
        adj[u][v] = 1;      // As there is not edge weight, so default set it as unit 1.
        // adj[v][u] = 1;       // As graph is directed, so only u->v.
    }
    
    // displaying matrix;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}