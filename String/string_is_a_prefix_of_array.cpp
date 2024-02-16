// LC->1961. Check If String Is a Prefix of Array

/**
Given a string s and an array of strings words, determine whether s is a prefix string of words.
A string s is a prefix string of words if s can be made by concatenating the first k strings in words for some positive k no larger than words.length.
Return true if s is a prefix string of words, or false otherwise.
**/

class Solution
{
public:
    bool isPrefixString(string s, vector<string> &words)
    {
        string ans = "";
        for (string c : words)
        {
            ans += c; // conc the word array in ans
            if (ans == s)
            { // check the ans == s or not..
                return true;
            }
        }
        return false;
    }
};