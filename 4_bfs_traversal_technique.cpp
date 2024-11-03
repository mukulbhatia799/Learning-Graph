#include<iostream>
#include<map>
#include<vector>
#include<queue>
using namespace std;

void bfsTraversal(map<int, vector<int> > &mp) {
    int visited[mp.size()+1] = {0};

    int startNode;
    cout << "Enter starting node for bfs traversal: ";
    cin >> startNode;

    auto it = mp.find(startNode);
    if(it == mp.end()) {
        cout << "Starting Node not found" << endl;
    }
    else {
        queue<int> q;
        q.push(startNode);
        q.push(-1);
        visited[startNode] = 1;

        while(!q.empty()) {
            int node = q.front();
            q.pop();

            if(node == -1) {
                if(!q.empty()) q.push(-1);
                cout << endl;
            }
            else {
                cout << node << " ";
                for(int child: mp[node]) {
                    if(visited[child] != 1) {
                        visited[child] = 1;
                        q.push(child);
                    }
                }
            }
        }
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

    bfsTraversal(mp);
    
    return 0;
}
