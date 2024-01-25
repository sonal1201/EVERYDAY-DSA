// LC -> Valid Palindrome

// Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.

class Solution
{
public:
    bool isalphaNum(char c)
    {
        if (c >= '0' && c <= '9')
            return true;
        if (c >= 'a' && c <= 'z')
            return true;
        if (c >= 'A' && c <= 'Z')
            return true;
        return false;
    }
    bool isPalindrome(string s)
    {
        string newstr;
        for (int i = 0; i < s.size(); i++)
        {
            if (isalphaNum(s[i]))
            {
                if (isupper(s[i]))
                    s[i] = tolower(s[i]);
                newstr.push_back(s[i]);
            }
        }
        string revstr = newstr;
        reverse(revstr.begin(), revstr.end()); // INBUILT FUNCTION TO REVERSE A STRING

        return (revstr == newstr);
    }
};