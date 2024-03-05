/**
 * LC->374. Guess Number Higher or Lower

You call a pre-defined API int guess(int num), which returns three possible results:

    -1: Your guess is higher than the number I picked (i.e. num > pick).
    1: Your guess is lower than the number I picked (i.e. num < pick).
    0: your guess is equal to the number I picked (i.e. num == pick).

**/

// BINARY SEARCH
// O(N)tc O(1)sc
class Solution
{
public:
    int guessNumber(int n)
    {
        int ans = 0;
        int s = 0;
        int e = n;
        while (s <= e)
        {
            int mid = s + (e - s) / 2;
            if (guess(mid) == 0)
            { // guess(mid) is a api provided by the question
                return mid;
            }
            else if (guess(mid) == -1)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        return -1;
    }
};