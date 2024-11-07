// 2275. Largest Combination With Bitwise AND Greater Than Zero

class Solution
{
public:
    int largestCombination(vector<int> &candidates)
    {
        vector<int> count(24, 0);
        int result = 0;
        for (int i = 0; i < 24; i++)
        {
            for (auto &nums : candidates)
            {
                if (nums & (1 << i))
                {
                    count[i]++;
                }
            }
            result = max(result, count[i]);
        }

        return result;
    }
};