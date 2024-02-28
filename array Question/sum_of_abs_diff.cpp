// LC->1685. Sum of Absolute Differences in a Sorted Array

// Brute Force....
class Solution
{
public:
    vector<int> getSumAbsoluteDifferences(vector<int> &nums)
    {
        vector<int> arr(nums.size());
        for (int i = 0; i < nums.size(); i++)
        {
            int sum = 0;
            for (int j = 0; j < nums.size(); j++)
            {
                sum += abs(nums[i] - nums[j]);
            }
            arr[i] = sum;
        }

        return arr;
    }
};