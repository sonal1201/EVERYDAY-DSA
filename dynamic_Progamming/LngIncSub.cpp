// 300. Longest Increasing Subsequence
TC->O(N ^ 2)

    class Solution
{
public:
    int lengthOfLIS(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> dp(n, 1);
        int max_lis = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i - 1; j >= 0; j--)
            {
                if (nums[j] < nums[i])
                {
                    dp[i] = max(dp[i], 1 + dp[j]);
                }
            }
            max_lis = max(max_lis, dp[i]);
        }
        return max_lis;
    }
};