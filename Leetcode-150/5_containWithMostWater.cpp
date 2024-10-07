// 11. Container With Most Water

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int i = 0;
        int j = height.size() - 1;
        int maxi = INT_MIN;

        while (i < j)
        {
            int w = j - i;
            int h = min(height[i], height[j]);
            int area = w * h;
            maxi = max(area, maxi);

            if (height[i] < height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }

        return maxi;
    }
};