// BINARY SEARCH....
// ARRAY SHOULD BE SORTED....
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int l = 0;
        int r = nums.size() - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (nums[mid] == target)
            { // IF TARGET == ARR[MID] return mid index
                return mid;
            }
            else if (nums[mid] > target)
            { // if target < mid do e = mid-1
                r = mid - 1;
            }
            else
            {
                l = mid + 1; // if target > mid then s =mid+1;
            }
        }
        return -1;
    }
};