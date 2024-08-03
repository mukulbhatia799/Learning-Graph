#include<iostream>
#include<vector>
using namespace std;

// undirected graph

/*
int main() {
    int n; cin >> n;

    int noOfEdges; cin >> noOfEdges;
    vector<int> adjList[n+1];

    for(int i = 0; i < noOfEdges; i++) {
        int u, v; cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    for(int i = 1; i <= n; i++) {
        cout << i << "->{";
        for(int j = 0; j < adjList[i].size(); j++) {
            cout << adjList[i][j] << ", ";
        }
        cout << "}" << endl;
    }

    return 0;
}

*/

// directed graph

/*
int main() {
    int n; cin >> n;

    int noOfEdges; cin >> noOfEdges;
    vector<int> adjList[n+1];

    for(int i = 0; i < noOfEdges; i++) {
        int u, v; cin >> u >> v;
        adjList[u].push_back(v);        // as graph is directed, so only one way.
    }

    for(int i = 1; i <= n; i++) {
        cout << i << "->{";
        for(int j = 0; j < adjList[i].size(); j++) {
            cout << adjList[i][j] << ", ";
        }
        cout << "}" << endl;
    }

    return 0;

    return 0;
}

*/


// now, if we want to store the edge weight with the nodes, then we have to take the array of vectors of pairs.

int main() {
    int n; cin >> n;
    int noOfEdges; cin >> noOfEdges;

    vector<pair<int, int>> adjList[n+1];

    for(int i = 0; i < noOfEdges; i++) {
        int u, v, wt; cin >> u >> v >> wt;

        adjList[u].push_back({v, wt});
        adjList[v].push_back({u, wt});
    }

    // displaying
    for(int i = 1; i <= n; i++) {
        cout << i << "->{";
        for(int j = 0; j < adjList[i].size(); j++) {
            cout << "{" << adjList[i][j].first << "," << adjList[i][j].second << "}, ";
        }
        cout << "}" << endl;
    }


    return 0;
}