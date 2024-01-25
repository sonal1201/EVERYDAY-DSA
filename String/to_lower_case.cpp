// LC-> To Lower Case

// Given a string s, return the string after replacing every uppercase letter with the same lowercase letter.

class Solution
{
public:
    string toLowerCase(string s)
    {
        string newstr;
        for (int i = 0; i < s.size(); i++)
        {
            newstr.push_back(tolower(s[i]));
        }
        return newstr;
    }
};