// Lc->Two Out of Three
// using Set
// using Unorederd map

class Solution
{
public:
    vector<int> twoOutOfThree(vector<int> &nums1, vector<int> &nums2, vector<int> &nums3)
    {
        unordered_map<int, int> mp;

        // SET will remove all Duplicate values
        set<int> s1(nums1.begin(), nums1.end()); // Appending into set to eliminate duplicate values
        set<int> s2(nums2.begin(), nums2.end());
        set<int> s3(nums3.begin(), nums3.end());
        for (int num : s1)
        {
            mp[num]++;
        }
        for (int num : s2)
        {
            mp[num]++;
        }
        for (int num : s3)
        {
            mp[num]++;
        }
        vector<int> arr;
        for (auto p : mp)
        {
            if (p.second >= 2)
            {
                arr.push_back(p.first);
            }
        }
        return arr;
    }
};