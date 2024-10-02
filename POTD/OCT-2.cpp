// 1331. Rank Transform of an Array

class Solution
{
public:
    vector<int> arrayRankTransform(vector<int> &arr)
    {
        set<int> st;
        unordered_map<int, int> mp;

        // store arr element in set;
        for (auto &i : arr)
        {
            st.insert(i);
        }

        int pos = 1;
        // acc to sorting of set
        // inc the the freq in map
        for (auto &it : st)
        {
            mp[it] = pos++;
        }

        // insert it in the arr
        int n = arr.size();
        vector<int> ranks(n);
        for (int i = 0; i < n; i++)
        {
            ranks[i] = mp[arr[i]]; // mp[arr[i]]->>finding the ele and returing it rank;
        }

        return ranks;
    }
};