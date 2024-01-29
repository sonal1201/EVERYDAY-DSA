// LC-> Best Time to Buy and Sell Stock II

//[7,1,5,3,6,4] //price
//[1,2,3,4,5,6] //day

// use i>i-1 add that diff

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int profit = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] > prices[i - 1])
            {
                profit += prices[i] - prices[i - 1];
            }
        }
        return profit;
    }
};