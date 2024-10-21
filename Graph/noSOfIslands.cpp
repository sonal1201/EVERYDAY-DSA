200. Number of Islands

    class Solution
{
public:
    void dfs(int i, int j, vector<vector<char>> &grid)
    {

        // base case;
        int m = grid.size();    //->row
        int n = grid[0].size(); //->col
        if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] != '1')
        {
            return;
        }

        // if above condition doesnt met then it ov 1
        grid[i][j] = '!';

        // dfs call
        dfs(i + 1, j, grid);
        dfs(i - 1, j, grid);
        dfs(i, j + 1, grid);
        dfs(i, j - 1, grid);
    }
    int numIslands(vector<vector<char>> &grid)
    {
        int m = grid.size();    //->row
        int n = grid[0].size(); //->col
        int cnt = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == '1')
                {
                    dfs(i, j, grid);
                    cnt += 1;
                }
            }
        }
        return cnt;
    }
};