// LC-> 78. Subsets

class Solution
{
public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> ans;
        int n = nums.size();
        for (int m = 0; m < (1 << n); m++)
        {
            vector<int> sub;
            for (int i = 0; i < n; i++)
            {
                if ((m >> i) & 1)
                {
                    sub.push_back(nums[i]);
                }
            }
            ans.push_back(sub);
        }
        return ans;
    }
};