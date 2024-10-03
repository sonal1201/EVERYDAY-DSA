// LC-> 1590. Make Sum Divisible by P

class Solution
{
public:
    int minSubarray(vector<int> &nums, int p)
    {
        int sum = 0;
        int n = nums.size();
        for (auto it : nums)
        {
            sum = (sum + it) % p;
        }
        int target = sum % p;
        if (target == 0)
        {
            return 0;
        }

        int curr = 0;
        unordered_map<int, int> mp; // store prev sum%p in map
        mp[0] = -1;
        int result = INT_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            curr = (curr + nums[i]) % p; // curr sum
            int finder = (curr - target + p) % p;
            if (mp.find(finder) != mp.end())
            {
                result = min(result, i - mp[finder]);
            }
            mp[curr] = i;
        }
        return result == n ? -1 : result;
    }
};