// LC42-> Trapping Rain Water (hard)

// using extra space O(n)
class Solution
{
public:
    int trap(vector<int> &height)
    {
        vector<int> left(height.size());
        left[0] = 0; // staring of the array will be always zero bcoz cant store water at last and first of the array
        for (int i = 1; i < height.size(); i++)
        {
            left[i] = max(height[i - 1], left[i - 1]); // Storing the maxi height from left side
        }
        vector<int> right(height.size());
        right[height.size() - 1] = 0; // ending of the array will be always zero
        for (int i = height.size() - 2; i >= 0; i--)
        {
            right[i] = max(height[i + 1], right[i + 1]); // Storing the maxi height from right side
        }
        int water = 0;
        int mini = INT_MAX;
        for (int i = 0; i < height.size(); i++)
        {
            mini = min(right[i], left[i]); // finding the min from left and right arr
            if ((mini - height[i]) >= 0)
            {
                water += (mini - height[i]); // adding the mini-hegiht[i] to sum. to find the trapping water...
            }
        }
        return water;
    }
};