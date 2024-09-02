// LC->120. Triangle

class Solution
{
public:
    int triangleHelper(vector<vector<int>> &triangle, vector<vector<int>> &dp, int n, int i, int j)
    {
        if (i == n - 1)
            return triangle[n - 1][j];
        if (dp[i][j] != -1)
            return dp[i][j];

        int ans1 = triangle[i][j] + triangleHelper(triangle, dp, n, i + 1, j);
        int ans2 = triangle[i][j] + triangleHelper(triangle, dp, n, i + 1, j + 1);

        return dp[i][j] = min(ans1, ans2);
    }
    int minimumTotal(vector<vector<int>> &triangle)
    {
        int n = triangle.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        return triangleHelper(triangle, dp, n, 0, 0);
    }
};