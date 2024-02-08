// lc->REMOVE  ELEMENT.

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (val != nums[i])
            {
                // Replace nums[cnt] with nums[i].
                // if there will any duplicate it will replace by i.
                nums[cnt] = nums[i]; // Removing the element if it is == val
                cnt++;
            }
        }
        return cnt;
    }
};