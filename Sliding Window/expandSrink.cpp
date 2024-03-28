// SLIDING WINDOW..
// EXPAND_Srink Template...

class Solution
{
public:
    long Expand_Srink(int K, vector<int> &Arr, int N)
    {
        long sum = 0;
        int l = 0;
        int r = 0;
        int max_len = INT_MIN;
        while (r < N)
        {
            sum += Arr[r];
            while (sum > K)
            {
                sum -= Arr[l];
                l += 1;
            }
            if (sum <= K)
            {
                max_len = max(max_len, r - l + 1);
            }
        }
        return max_len;
    }
};