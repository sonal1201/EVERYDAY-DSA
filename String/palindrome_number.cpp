// LC- Palindrome Number

// Given an integer x, return true if x is a palindrome, and false otherwise.

class Solution
{
public:
    bool isPalindrome(int x)
    {

        if (x < 0)
        {
            return false;
        }
        long long temp = x;
        long long rev = 0;
        while (temp != 0)
        {
            int digit = temp % 10;
            rev = rev * 10 + digit;
            temp = temp / 10;
        }

        return (rev == x);
    }
};