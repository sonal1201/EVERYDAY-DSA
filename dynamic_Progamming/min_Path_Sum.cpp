// 64. Minimum Path Sum

class Solution
{
public:
    int minPathHelper(int i, int j, vector<vector<int>> &grid, vector<vector<int>> &dp)
    {
        // BASE CASE
        if (i == 0 && j == 0)
            return grid[0][0];
        if (i < 0 || j < 0)
            return 1e9;
        if (dp[i][j] != -1)
            return dp[i][j];

        // recursive call
        int up = grid[i][j] + minPathHelper(i - 1, j, grid, dp);
        int left = grid[i][j] + minPathHelper(i, j - 1, grid, dp);

        return dp[i][j] = min(up, left);
    }
    int minPathSum(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return minPathHelper(n - 1, m - 1, grid, dp);
    }