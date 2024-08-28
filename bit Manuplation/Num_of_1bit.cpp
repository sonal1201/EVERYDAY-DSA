// 191. Number of 1 Bits

class Solution
{
public:
    int hammingWeight(int n)
    {
        long long cnt = 0;
        while (n > 0)
        {
            n &= (n - 1);
            cnt++;
        }
        return cnt;
    }
};