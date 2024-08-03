#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n; cin >> n;
    int noOfEdges; cin >> noOfEdges;

    int visited[n+1]; for(int i = 0; i <= n; i++) visited[i] = 0;

    vector<int> adjList[n+1];

    for(int i = 0; i < noOfEdges; i++) {
        int u, v; cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    cout << "visited nodes: ";
    for(int i = 1; i <= n; i++) {
        if(visited[i] == 0) {
            cout << i << " ";
            for(int j = 0; j < adjList[i].size(); j++) {
                visited[adjList[i][j]] = 1;
                cout << adjList[i][j] << " ";
            }
        }
    }   // All the nodes will be visited only once using visited array.
    cout << endl;

    return 0;
}