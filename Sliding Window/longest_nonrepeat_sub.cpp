// LC->3.Longest Substring Without Repeating Characters

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        if (s.size() == 0)
            return 0;
        int i = 0;
        int j = 0;
        int ans = 0;
        unordered_map<char, int> freq; // using unordered map for unique char
        while (j < s.size())
        {
            freq[s[j]]++;
            if (freq.size() == j - i + 1) // if the freq.size is equal to j-i+1 then there is no repeating char...
            {
                ans = max(ans, j - i + 1); // store the size
            }
            else if (freq.size() < j - i + 1) // if there is repeating char then the freq.size will < then j-i+1
            {
                while (freq.size() < j - i + 1)
                {
                    freq[s[i]]--; // remove the repeating char by removing i
                    if (freq[s[i]] == 0)
                    {
                        freq.erase(s[i]);
                    }
                    i++; // do i++
                }
            }
            j++;
        }

        return ans;
    }
};

// More optimal Approach
// TC->O(N)

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        vector<int> hash(256, -1);
        int n = s.size();
        int l = 0, r = 0;
        int maxlen = 0;
        while (r < n)
        {
            if (hash[s[r]] != -1)
            {
                if (hash[s[r]] >= l)
                {
                    l = hash[s[r]] + 1;
                }
            }
            maxlen = max(maxlen, r - l + 1);
            hash[s[r]] = r;
            r++;
        }
        return maxlen;
    }
};