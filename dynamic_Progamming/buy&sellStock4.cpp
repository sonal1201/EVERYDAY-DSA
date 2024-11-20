// 188. Best Time to Buy and Sell Stock IV
class Solution
{
public:
    int profitHelper(int i, int tranNo, vector<int> &prices,
                     vector<vector<int>> &dp, int n, int k)
    {

        if (tranNo == 2 * k || i == n)
            return 0;

        if (dp[i][tranNo] != -1)
        {
            return dp[i][tranNo];
        }

        if (tranNo % 2 == 0)
        {
            return dp[i][tranNo] =
                       max(-prices[i] + profitHelper(i + 1, tranNo + 1, prices,
                                                     dp, n, k),
                           0 + profitHelper(i + 1, tranNo, prices, dp, n, k));
        }
        return dp[i][tranNo] =
                   max(prices[i] +
                           profitHelper(i + 1, tranNo + 1, prices, dp, n, k),
                       0 + profitHelper(i + 1, tranNo, prices, dp, n, k));
    }

    int maxProfit(int k, vector<int> &prices)
    {
        int n = prices.size();
        vector<vector<int>> dp(n, vector<int>(1003, -1));
        return profitHelper(0, 0, prices, dp, n, k);
    }
};