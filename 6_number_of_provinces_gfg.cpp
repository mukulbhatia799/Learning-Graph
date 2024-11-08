void dfs(map<int, vector<int>> &mp, int visited[], int initial) {
        
        for(int value: mp[initial]) {
            if(visited[value] != 1) {
                visited[value] = 1;
                dfs(mp, visited, value);
            }
        }
    }
    int numProvinces(vector<vector<int>> adj, int V) {
        
        map<int, vector<int>> mp;
        for(int i = 0; i < adj.size(); i++) {
            for(int j = 0; j < adj[i].size(); j++) {
                if(adj[i][j] == 1 && i != j) {
                    mp[i].push_back(j);
                    mp[j].push_back(i);
                }
            }
        }
        
        int visited[V] = {0};
        
        int count = 0;
        for(int i = 0; i < V; i++) {
            if(visited[i] == 0) {
                count++;
                visited[i] = 1;
                dfs(mp, visited, i);
            }
        }
        
        return count;
    }
