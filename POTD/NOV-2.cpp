// 2490. Circular Sentence

class Solution
{
public:
    bool isCircularSentence(string s)
    {

        int n = s.size();
        if (s[0] != s[n - 1])
            return false;

        for (int i = 1; i < n; i++)
        {
            if (s[i] == ' ')
            {
                if (s[i - 1] != s[i + 1])
                    return false;
                else
                {
                    continue;
                }
            }
        }

        return true;
    }
};