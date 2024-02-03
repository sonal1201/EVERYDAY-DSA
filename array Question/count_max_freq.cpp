// LC-3005. Count Elements With Maximum Frequency

class Solution
{
public:
    int maxFrequencyElements(vector<int> &nums)
    {
        vector<int> v(101);
        // Calculate freq of each element
        for (int i = 0; i < nums.size(); i++)
        {
            v[nums[i]]++;
        }
        int ans = 0;  // store the maximum freq
        int temp = 0; // current maxi freq
        for (int i = 1; i < 101; i++)
        {
            if (v[i] == temp)
            {
                ans += v[i];
            }
            else if (v[i] > temp)
            {
                ans = v[i];
                temp = v[i];
            }
        }
        return ans;
    }
};