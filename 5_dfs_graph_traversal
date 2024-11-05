#include<iostream>
#include<map>
#include<vector>
using namespace std;

void DFS(map<int, vector<int> > &mp, vector<int> &visited, int node) {
    if(mp.find(node) == mp.end()) return;
    cout << node << " ";
    for(int val: mp[node]) {
        if(visited[val] != 1) {
            visited[val] = 1;
            DFS(mp, visited, val);
        }
    }
}

void dfsTraversal(map<int, vector<int> > &mp) {
    
    int initialNode;
    cout << "Enter the initial node: ";
    cin >> initialNode;

    if(mp.find(initialNode) == mp.end()) {
        cout << "initial node not found" << endl;
    }
    else {
        vector<int> visited(mp.size()+1, 0);
        visited[initialNode] = 1;
        DFS(mp, visited, initialNode);
    }
}


int main(){
    map<int, vector<int> > mp;

    cout << "Enter starting and ending node: (-1 and -1 values for exit)" << endl;

    int start = 0, end = 0;
    cout << "starting node: ";
    cin >> start;
    cout << "Ending node: ";
    cin >> end;

    while(start != -1) 
    {
        mp[start].push_back(end);
        mp[end].push_back(start);

        cout << "starting node: ";
        cin >> start;
        cout << "Ending node: ";
        cin >> end;
    }

    cout << "Displaying adjacency list: " << endl;
    for(auto it: mp) {
        cout << it.first << " -> ";
        for(auto val: it.second) {
            cout << val << ", ";
        }
        cout << endl;
    }

    dfsTraversal(mp);
    
    return 0;
}
