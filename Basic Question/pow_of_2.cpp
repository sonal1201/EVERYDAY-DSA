/*
If a number is perfect power of 2 then the number is in
form of 2 * 2 * 2 * ......* 2 * 1,
if we remove all factor of 2 from this number then at last
number is converted to 1.
so to check if a number is perfect power of we remove
all factor of 2 and at last if number is 1 then this is power
perfect of 2 otherwise not.
we can do this as */

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n == 0)
        {
            return false;
        }
        while (n % 2 == 0)
        {
            n /= 2;
        }
        return n == 1;
    }
};