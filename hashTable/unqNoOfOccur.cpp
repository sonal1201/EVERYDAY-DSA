class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        unordered_map<int, int> mp;
        // storing the freq of arr ele in mp;
        for (auto &it : arr)
        {
            mp[it]++;
        }

        unordered_set<int> st;

        // insert unique occurance in set;
        for (auto &it : mp)
        {
            int freq = it.second;
            // if end() doesn't go till end it means there is duplicate occ
            if (st.find(freq) != st.end())
                return false;
            st.insert(freq);
        }
        return true;
    }
};