// 123. Best Time to Buy and Sell Stock III

class Solution
{
public:
    int profitHelper(int i, int buy, int cap, vector<int> &prices,
                     vector<vector<vector<int>>> &dp, int n)
    {

        if (cap == 0 || i == n)
            return 0;

        if (dp[i][buy][cap] != -1)
        {
            return dp[i][buy][cap];
        }

        if (buy == 1)
        {
            return dp[i][buy][cap] = max(
                       -prices[i] + profitHelper(i + 1, 0, cap, prices, dp, n),
                       0 + profitHelper(i + 1, 1, cap, prices, dp, n));
        }
        return dp[i][buy][cap] = max(
                   prices[i] + profitHelper(i + 1, 1, cap - 1, prices, dp, n),
                   0 + profitHelper(i + 1, 0, cap, prices, dp, n));
    }

    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        vector<vector<vector<int>>> dp(
            n, vector<vector<int>>(2, vector<int>(3, -1)));
        return profitHelper(0, 1, 2, prices, dp, n);
    }
};