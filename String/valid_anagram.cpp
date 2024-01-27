// LC -> VALID ANAGRAM

class Solution
{
public:
    bool isAnagram(string s, string t)
    {

        if (s.size() != t.size()) // if size of s and t is not equal return false;
            return false;

        vector<int> freq(26);
        for (auto &c : s)
        {
            freq[c - 'a']++;
        }
        for (auto &c : t)
        {
            freq[c - 'a']--;
        }
        // Check all element of freq is zero or Not..
        for (auto const &n : freq)
        {
            if (n != 0)
                return false;
        }
        return true;
    }
};