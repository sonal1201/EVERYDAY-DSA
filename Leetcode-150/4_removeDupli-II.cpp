// 80. Remove Duplicates from Sorted Array II

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int id = 1;
        int occ = 1;

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1])
            {
                occ++;
            }
            else
            {
                occ = 1;
            }
            if (occ <= 2)
            {
                nums[id] = nums[i];
                id++;
            }
        }
        return id;
    }
};