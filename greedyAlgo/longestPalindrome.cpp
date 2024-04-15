// LC->409. Longest Palindrome

/*
Firstly we will count letters of all types in an unordered map.
Now, to make a palindrome, first and last letters must be same.
So, we need two letters of same type to make a palindrome.
and do the pairing to make the string a palindrome.
But we can also add a middle character to a palindrome(Eg - aba).
So, if there is even a single letter which does not make pair
then we can add 1 to count to increase the length of the
palindrome.
*/

class Solution
{
public:
    int longestPalindrome(string s)
    {
        unordered_map<int, int> mp;
        int len = 0;
        bool unpair = false;
        for (char m : s)
        {
            mp[m]++;
        }
        for (auto c : mp)
        {
            len += c.second;
            if (len % 2 == 1)
            {
                len--;
                unpair = true;
            }
        }
        if (unpair)
        {
            len++;
        }
        return len;
    }
};