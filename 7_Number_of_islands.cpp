void findAns(vector<vector<char>> &grid, vector<vector<int>> &vis, int row, int col)
{

    queue<pair<int, int>> q;
    q.push({row, col});

    while (!q.empty())
    {
        int fi = q.front().first;
        int se = q.front().second;
        cout << "fi: " << fi << " se: " << se << endl;
        q.pop();

        for (int i = -1; i <= 1; i++)
        {
            for (int j = -1; j <= 1; j++)
            {
                cout << fi - i << " " << se - j << endl;
                if (fi-i >= 0 && fi-i < grid.size() && se-j >= 0 && se-j < grid[0].size() && grid[fi - i][se - j] == '1' && vis[fi - i][se - j] == 0)
                {
                    vis[fi - i][se - j] = 1;
                    q.push({fi - i, se - j});
                }
            }
        }
    }
}
int numIslands(vector<vector<char>> &grid)
{

    vector<vector<int>> visited(grid.size(), vector<int>(grid[0].size(), 0));
    int count = 0;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            if (grid[i][j] == '1' && visited[i][j] == 0)
            {
                count++;
                visited[i][j] = 1;
                findAns(grid, visited, i, j);
            }
        }
    }

    return count;
}
