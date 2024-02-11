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

// More OPTIMIZE OF SLIDING WINDOW.

class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        double maxi = INT_MIN;
        double window_sum = 0;
        for (int i = 0; i < k; i++)
        {
            window_sum += nums[i]; // SUM OF FIRST WINDOW
        }
        maxi = window_sum; // IF WE HAVE SUM FIRST TIME COPY THAT TO MAXI

        for (int i = k; i < nums.size(); i++) // MOVING THE WINDOW FORWARD//
        {
            int first = i - k;     // SUBTRACT FIRST ELEMENT OF THE WINDOW
            window_sum += nums[i]; // ADDING NEXT ELEMENT FROM THE LAST ELEMENT OF THE WINDOW...
            window_sum -= nums[first];
            maxi = max(maxi, window_sum); // FIND THE MAX
        }
        double ans = maxi / k;
        return ans;
    }
};