// LC-1439-> Longest Subarray of 1's After Deleting One Element

class Solution
{
public:
    int longestSubarray(vector<int> &nums)
    {
        // agar ek bhi one nhi rahega then return ans =0;
        int l = 0;
        int ans = 0;
        int zero_cnt = 0;
        int n = nums.size();
        for (int r = 0; r < n; r++)
        {
            if (nums[r] == 0)
                zero_cnt++;
            for (; zero_cnt > 1; l++)
            { // here cond is if zero>1 then it will do l++;
                if (nums[l] == 0)
                    zero_cnt--;
            }
            ans = max(ans, r - l + 1); // its finding out the max 1's
        }
        return ans - 1;
    }
};