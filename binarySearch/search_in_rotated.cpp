// Search in Rotated Sorted Array

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int l = 0;
        int r = nums.size() - 1;
        int lastele = nums[r];
        while (l <= r)
        {
            int mid = (l + r) / 2;
            // target in 1st reg and i m standing in the 2nd reg
            if (target > lastele && nums[mid] <= lastele)
            {
                r = mid - 1;
            }
            // target in 2st reg and i m standing in the 1st reg
            else if (target <= lastele && nums[mid] > lastele)
            {
                l = mid + 1;
            }
            // target and i we both are in the same region
            else
            {
                if (nums[mid] == target)
                {
                    return mid;
                }
                else if (nums[mid] > target)
                {
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
        }
        return -1;
    }
};