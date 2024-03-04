// LC->SQRT(X)

class Solution
{
public:
    int mySqrt(int x)
    {
        long i = 0;
        int ans = 0;
        while (i <= x)
        {
            if (i * i <= x)
            {
                ans = i;
                i++;
            }
            else
            {
                return ans;
            }
        }
        return ans;
    }
};