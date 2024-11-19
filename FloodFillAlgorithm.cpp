#include<bits/stdc++.h>
using namespace std;

void floodFill(vector<vector<int>> &image, int sr, int sc, int newColor, int initial, vector<vector<int>> &vis) {
    int n = image.size();
    int m = image[0].size();

    int row[] = {-1, 0, 1, 0};
    int col[] = {0, 1, 0, -1};

    for(int i = 0; i < 4; i++) {
        int r = sr-row[i];
        int c = sc-col[i];

        if(r >= 0 && r < n && r >= 0 && r < m && image[r][c] == initial && vis[r][c] == 0) {
            vis[r][c] = 1;
            image[r][c] = newColor;
            floodFill(image, r, c, newColor, initial, vis);
        }
    }
}

int main() {

    vector<vector<int>> image = {
        {1, 1, 1},
        {1, 1, 0},
        {1, 0, 1}
    };

    int n = image.size();
    int m = image[0].size();

    vector<vector<int>> visited(n, vector<int>(m, 0));

    int sr = 2, sc = 0;
    int initial = image[sr][sc];
    int newColor = 2;
    visited[sr][sc] = 1;
    image[sr][sc] = newColor;

    floodFill(image, sr, sc, newColor, initial, visited);

    for(auto vec: image) {
        for(int val: vec) {
            cout << val << " ";
        }
        cout << endl;
    }
    
    

    return 0;
}
