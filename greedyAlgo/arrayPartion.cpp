// LC->ARRAY PARTION//

// we can sort the array first and then pair
// the numbers such that second maximum always get included of the pair in
// the sum.

class Solution
{
public:
    int arrayPairSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int sum = 0;
        for (int i = 0; i < nums.size(); i += 2)
        {
            sum += nums[i];
        }
        return sum;
    }
};