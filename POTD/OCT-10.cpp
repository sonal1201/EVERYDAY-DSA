// 962. Maximum Width Ramp

class Solution
{
public:
    int maxWidthRamp(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> storeMaxi(n, 0);
        storeMaxi[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            storeMaxi[i] = max(storeMaxi[i + 1], nums[i]);
        }

        int maxWidth = 0;
        int i = 0;
        int j = 0;
        while (j < n)
        {
            if (nums[i] <= storeMaxi[j])
            {
                maxWidth = max(maxWidth, j - i);
                j++;
            }
            else
            {
                i++;
            }
        }
        return maxWidth;
    }
};