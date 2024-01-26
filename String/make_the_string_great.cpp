// LC -> Make The String Great

class Solution
{
public:
    string makeGood(string s)
    {
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] - 'a' == s[i + 1] - 'A' || s[i] - 'A' == s[i + 1] - 'a')
            {
                s.erase(i, 2);
                i--;

                if (i > -1)
                {
                    i--;
                }
                if (s.size() == 0)
                {
                    break;
                }
            }
        }
        return s;
    }
};