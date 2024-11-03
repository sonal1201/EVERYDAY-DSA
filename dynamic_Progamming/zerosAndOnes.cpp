// 474. Ones and Zeroes

class Solution
{
public:
    int dp[102][102][602];
    int count0s(string s)
    {
        int cnt = 0;
        for (auto c : s)
        {
            if (c == '0')
                cnt++;
        }

        return cnt;
    }
    int count1s(string s)
    {
        int cnt = 0;
        for (auto c : s)
        {
            if (c == '1')
                cnt++;
        }
        return cnt;
    }

    int solver(int idx, vector<string> &strs, int m, int n)
    {
        if (m == 0 && n == 0 || idx == strs.size())
            return 0;

        int count0 = count0s(strs[idx]);
        int count1 = count1s(strs[idx]);

        if (dp[m][n][idx] != -1)
            return dp[m][n][idx];

        int ans1 = 0;
        int ans2 = 0;
        if (count0 <= m && count1 <= n)
        {
            ans1 = 1 + solver(idx + 1, strs, m - count0, n - count1);
        }

        ans2 = solver(idx + 1, strs, m, n);

        return dp[m][n][idx] = max(ans1, ans2);
    }

    int findMaxForm(vector<string> &strs, int m, int n)
    {
        memset(dp, -1, sizeof(dp));
        return solver(0, strs, m, n);
    }
};