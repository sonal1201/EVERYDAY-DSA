// 2501. Longest Square Streak in an Array

class Solution
{
public:
    int longestSquareStreak(vector<int> &nums)
    {
        sort(begin(nums), end(nums));
        unordered_map<int, int> mp;
        int maxStreak = 0;

        for (auto num : nums)
        {
            int root = (int)sqrt(num);

            if (root * root == num && mp.find(root) != mp.end())
            {
                mp[num] = mp[root] + 1;
            }
            else
            {
                mp[num] = 1;
            }
            maxStreak = max(maxStreak, mp[num]);
        }

        return maxStreak < 2 ? -1 : maxStreak;
    }
};