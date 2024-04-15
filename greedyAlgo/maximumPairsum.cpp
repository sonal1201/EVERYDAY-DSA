// LC ->minimize-maximum-pair-sum-in-array

/*
Picking the element greedily will help. For the largest element,
we need to have the smallest element of the array paired with
it because if we take any other element for that, then the
paired sum with the largest element will always increase.
Similarly for second largest element, second smallest element
will be taken and so on. Then we can find the maximum sum among
all the possible pairs.
*/

class Solution
{
public:
    int minPairSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = nums.size() - 1;
        int maxi = INT_MIN;
        while (i <= j)
        {
            int sum = nums[i] + nums[j];
            maxi = max(sum, maxi);
            i++;
            j--;
        }
        return maxi;
    }
};