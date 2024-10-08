// Marjority Element

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int cnt = 0;
        int el;

        for (auto i : nums)
        {
            if (cnt == 0)
            {
                cnt = 1;
                el = nums[i];
            }
            else if (el == nums[i])
            {
                cnt++;
            }
            else
            {
                cnt– - ;
            }
        }
        return el;
    }
};
