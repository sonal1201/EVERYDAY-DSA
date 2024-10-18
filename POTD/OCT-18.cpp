// 2044. Count Number of Maximum Bitwise-OR Subsets

class Solution
{
public:
    int countsubSet(int i, int currOR, vector<int> nums, int maxBit)
    {
        int n = nums.size();
        // base case
        if (i == n)
        {
            if (maxBit == currOR)
                return 1;
            return 0;
        }

        // take it
        int countBit = countsubSet(i + 1, currOR | nums[i], nums, maxBit);

        // leave it

        int notCountBit = countsubSet(i + 1, currOR, nums, maxBit);

        return countBit + notCountBit;
    }
    int countMaxOrSubsets(vector<int> &nums)
    {
        int maxBit = 0;

        // maximum bitwise OR from the arr
        for (int i : nums)
        {
            maxBit |= i;
        }

        int currOR = 0;
        return countsubSet(0, currOR, nums, maxBit);
    }
};