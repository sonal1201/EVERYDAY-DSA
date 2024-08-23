// LC-> LONGENT COMMON SUBSEQENCE

// TWO POINTER LIKE AP BUT IN RECURSION/MEMOIZATION
class Solution
{
public:
    int lcs(int i, int j, string &text1, string &text2, int dp[1005][1005])
    {
        if (i < 0 || j < 0)
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];
        int ans = lcs(i - 1, j, text1, text2, dp);
        ans = max(ans, lcs(i, j - 1, text1, text2, dp));
        ans = max(ans, lcs(i - 1, j - 1, text1, text2, dp) + (text1[i] == text2[j]));
        return dp[i][j] = ans;
    }

    int longestCommonSubsequence(string text1, string text2)
    {
        int dp[1005][1005];
        memset(dp, -1, sizeof(dp));
        return lcs(text1.size() - 1, text2.size() - 1, text1, text2, dp);
    }
};