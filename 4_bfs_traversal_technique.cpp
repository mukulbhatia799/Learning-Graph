#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main() {
    cout << "Enter no. of nodes and edges: ";
    int n, e; cin >> n >> e;

    vector<int> adjList[n+1];

    // take input of edges(u, v)
    for(int i = 0; i < e; i++) {
        int u, v; cin >> u >> v;
        adjList[u].push_back(v);
        // adjList[v].push_back(u);     
    }

    cout << "displaying adj list:" << endl;
    for(int i = 0; i < n+1; i++) {
        cout << i << "-> ";
        for(int j = 0; j < adjList[i].size(); j++) {
            cout << adjList[i][j] << " ";
        }
        cout << endl;
    }


    int visited[n+1] = {0};

    queue<int> q;
    q.push(1);
    visited[1] = 1;

    cout << "BFS: " << endl;
    while(!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";

        for(auto it: adjList[node]) {
            if(!visited[it]) {
                q.push(it);
                visited[it] = 1;
            }
        }        
    }

    return 0;
}