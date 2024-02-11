// LC->Maximum Average Subarray I
// Some testcase is passed after that gining tle;;;

class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        double maxi = INT_MIN;
        for (int i = 0; i < nums.size() - k + 1; i++)
        {
            double window_sum = 0;
            for (int j = i; j <= k + i - 1; j++)
            {
                window_sum += nums[j];
            }
            maxi = max(maxi, window_sum);
        }
        double ans = maxi / k;
        return ans;
    }
};