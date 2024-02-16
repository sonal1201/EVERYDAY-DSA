// LC->918. Maximum Sum Circular Subarray
// STEP-1 -> TOTAL_SUM - MIN_SUM_OF_SUBARRAY(find using kadane algo)
// STEP-2 -> THEN FIND THE MAX_SUM_OF_SUBARRAY(kadane algo)
// STEP-3 -> IF MAX_SUM<0 RETURN MAX_SUM OR RETURN MAX(TOTAL SUM-MIN_SUM,MAX_SUM)

class Solution
{
public:
    int maxSubarraySumCircular(vector<int> &nums)
    {
        // step-1
        int total_sum = 0;
        int min_sum = 0;
        int curr = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            total_sum += nums[i];
            curr += nums[i];
            min_sum = min(min_sum, curr);
            if (curr > 0)
            {
                curr = 0;
            }
        }
        curr = 0;
        // step-2
        int max_sum = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            curr += nums[i];
            max_sum = max(curr, max_sum);
            if (curr < 0)
            {
                curr = 0;
            }
        }
        // step-3
        if (max_sum < 0)
        { // In case all element in an array are negative;;
            return max_sum;
        }
        return max(total_sum - min_sum, max_sum);
    }
};