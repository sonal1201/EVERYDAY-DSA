// LC -> Count Asterisks

class Solution
{
public:
    int countAsterisks(string s)
    {
        int bars = 0;
        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '|')
            {
                bars++;
            }
            if (bars % 2 == 0 && s[i] == '*') // for every even bar we start count "*"
            {
                cnt++;
            }
        }
        return cnt;
    }
};