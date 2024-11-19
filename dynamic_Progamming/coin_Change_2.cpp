// 518. Coin Change II

class Solution {

public:
    int coinHelper(int i, vector<vector<int>>& dp, int amount,
                   vector<int>& coins) {

        if (amount == 0) {
            return 1;
        }
        if (amount < 0 || i >= coins.size()) {
            return 0;
        }

        if (dp[i][amount] != -1) {
            return dp[i][amount];
        }
        int ans = 0;

        int ans1 = coinHelper(i, dp, amount - coins[i], coins);
        int ans2 = coinHelper(i + 1, dp, amount, coins);

        return dp[i][amount] = ans1 + ans2;
    }
    int change(int amount, vector<int>& coins) {

        vector<vector<int>> dp(coins.size(), vector<int>(amount + 1, -1));

        return coinHelper(0, dp, amount, coins);
    }
};