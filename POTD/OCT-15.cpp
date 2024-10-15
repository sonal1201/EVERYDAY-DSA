// SEPERATING OF WHITE AND BLACK BALL....

class Solution
{
public:
    long long minimumSteps(string s)
    {
        long i = 0;
        long j = s.size() - 1;
        long step = 0;
        while (i < j)
        {
            if (s[i] == '1' && s[j] == '0')
            {
                swap(s[i], s[j]);
                step += (j - i);
                i++;
                j--;
            }
            else if (s[j] == '1' && s[i] == '1')
            {

                j--;
            }
            else
            {
                i++;
            }
        }
        return step;
    }
};