// CN-> Best Time to Buy and Sell Stock II

// [7, 1, 5, 3, 6, 4]

// Brute Force..
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {

        int maxi = INT_MIN;
        for (int i = 0; i < price.size(); i++)
        {
            for (int j = i + 1; j < price.size(); j++)
            {
                if (price[j] - price[i] > maxi)
                {
                    maxi = price[j] - price[i];
                }
            }
        }
    }
};

// Optimal
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for (int i = 0; i < prices.size(); i++)
        {
            mini = min(mini, prices[i]);
            maxi = max(maxi, prices[i] - mini);
        }
        return maxi;
    }
};