// USING PREFIX SUM CONCEPT////
// LC-<1480. Running Sum of 1d Array

class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        vector<int> ans(nums.size());
        for (int i = 0; i < nums.size(); ++i)
        {
            if (i > 0)
            {
                ans[i] = ans[i - 1] + nums[i];
            }
            else
            {
                ans[i] = nums[i];
            }
        }
        return ans;
    }
};