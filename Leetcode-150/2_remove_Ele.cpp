// 27. Remove Element

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        vector<int> addArr;
        int idx = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {
                nums[idx] = nums[i];
                idx++;
            }
        }
        return idx;
    }
};