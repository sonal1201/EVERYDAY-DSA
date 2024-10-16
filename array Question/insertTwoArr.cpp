// 349. Intersection of Two Arrays

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        set<int> s1, s2;
        for (auto it : nums1)
        {
            s1.insert(it);
        }
        for (auto it : nums2)
        {
            s2.insert(it);
        }
        vector<int> vec;
        for (auto it : s1)
        {
            if (s2.find(it) != s2.end())
            {
                vec.push_back(it);
            }
        }
        return vec;
    }
};