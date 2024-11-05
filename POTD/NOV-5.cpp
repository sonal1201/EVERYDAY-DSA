// 2914. Minimum Number of Changes to Make Binary String Beautiful

class Solution
{
public:
    int minChanges(string s)
    {

        int cnt = 0;

        for (int i = 0; i < s.size() - 1; i++)
        {
            if ((s[i] == '0' && s[i + 1] != '0') || (s[i] == '1' && s[i + 1] != '1'))
            {
                cnt++;
                i++;
            }
            else
            {
                i++;
                continue;
            }
        }
        return cnt;
    }
};