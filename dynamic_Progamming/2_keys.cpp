// 650. 2 Keys Keyboard

class Solution
{
public:
    int solve(int curr, int clip, int n)
    {
        if (curr == n)
            return 0;
        if (curr > n)
            return 10000;

        int copyPaste = 2 + solve(curr + curr, curr, n);

        int paste = 1 + solve(curr + clip, clip, n);

        return min(copyPaste, paste);
    }
    int minSteps(int n)
    {

        if (n == 1)
            return 0;

        return 1 + solve(1, 1, n);
    }
};