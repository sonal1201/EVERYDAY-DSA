// 796. Rotate String

class Solution
{
public:
    bool rotateString(string s, string goal)
    {
        if (s == goal)
            return true;

        int n = s.size();
        int m = goal.size();

        if (n != m)
            return false;

        for (int i = 1; i < n; i++)
        {
            rotate(s.begin(), begin(s) + 1, s.end());

            if (s == goal)
                return true;
        }
        return false;
    }
};