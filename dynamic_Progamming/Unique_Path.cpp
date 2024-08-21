// LC-- 62. Unique Paths

// using recursion
class Solution
{
public:
    int uniquePathsHelper(int i, int j, int m, int n)
    {
        if (i == m - 1 && j == n - 1)
            return 1;
        if (i >= m || j >= n)
            return 0;

        int pathToright = uniquePathsHelper(i, j + 1, m, n);
        int pathTodown = uniquePathsHelper(i + 1, j, m, n);

        return pathToright + pathTodown;
    }
    int uniquePaths(int m, int n) { return uniquePathsHelper(0, 0, m, n); }
};

// Using Dp

class Solution
{
public:
    int uniquePathsHelper(int i, int j, int m, int n, int dp[101][101])
    {
        if (i == m - 1 && j == n - 1)
            return 1;
        if (i >= m || j >= n)
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];

        int pathToright = uniquePathsHelper(i, j + 1, m, n, dp);
        int pathTodown = uniquePathsHelper(i + 1, j, m, n, dp);

        return dp[i][j] = pathToright + pathTodown;
    }
    int uniquePaths(int m, int n)
    {
        int dp[101][101];
        memset(dp, -1, sizeof(dp));
        return uniquePathsHelper(0, 0, m, n, dp);
    }
};