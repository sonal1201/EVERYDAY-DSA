// LC->POWER OF 3

class Solution
{
public:
    bool isPowerOfThreeHelper(int n)
    {
        if (n == 1)
            return true; // base case
        if (n % 3 != 0)
            return false;                   // base case
        return isPowerOfThreeHelper(n / 3); // recursion call
    }

    bool isPowerOfThree(int n)
    {
        if (n == 1)
            return true; // 3^0 == 1
        if (n <= 0)
            return false; // base case if n==0 or lesser than 0
        return isPowerOfThreeHelper(n);
    }
};