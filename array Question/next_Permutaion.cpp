// NEXT PERMUTATION

class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int i = nums.size() - 2;
        while (i >= 0 && nums[i + 1] <= nums[i])
        { // this loop for finding largest number i > i+1
            i--;
        }
        int j = nums.size() - 1;
        if (i >= 0)
        { // this checking is there any next permutaion is avbilable if not just reverse the array

            while (nums[j] <= nums[i])
            { // if i>0 then do j-- till i>j0
                j--;
            }
            swap(nums[i], nums[j]); // and swap it to get next permutaion.
        }
        reverse(nums.begin() + i + 1, nums.end());
    }
};