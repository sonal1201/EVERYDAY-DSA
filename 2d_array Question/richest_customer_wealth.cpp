// Richest Customer Wealth
// LEETCODE
// Input: accounts = [[1,2,3],[3,2,1]]
// Output: 6
// Explanation:
// 1st customer has wealth = 1 + 2 + 3 = 6
// 2nd customer has wealth = 3 + 2 + 1 = 6
// Both customers are considered the richest with a wealth of 6 each, so return 6.

class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int sum = 0;
        for (int i = 0; i < accounts.size(); i++)
        {
            int rich = 0;
            for (int j = 0; j < accounts[i].size(); j++)
            {
                rich += accounts[i][j];
            }
            sum = max(sum, rich);
        }
        return sum;
    }
};