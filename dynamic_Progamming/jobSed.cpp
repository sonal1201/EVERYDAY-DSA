// 1335. Minimum Difficulty of a Job Schedule

class Solution
{
public:
    int dp[301][11];
    int solve(vector<int> &jd, int d, int idx, int n)
    {
        // base
        if (d == 1)
        {
            int maxD = jd[idx];
            for (int i = idx; i < n; i++)
            {
                maxD = max(maxD, jd[i]);
            }
            return maxD;
        }
        if (dp[idx][d] != -1)
            return dp[idx][d];

        int maxD = jd[idx];
        int finalResult = INT_MAX;
        for (int i = idx; i <= n - d; i++)
        {
            maxD = max(maxD, jd[i]);
            int result = maxD + solve(jd, d - 1, i + 1, n);

            finalResult = min(finalResult, result);
        }
        return dp[idx][d] = finalResult;
    }
    int minDifficulty(vector<int> &jd, int d)
    {
        int n = jd.size();
        if (n < d)
            return -1;
        memset(dp, -1, sizeof(dp));
        return solve(jd, d, 0, n);
    }
};