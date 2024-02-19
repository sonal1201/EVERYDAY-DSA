// Largest Odd number in string

// Brute froce Solution
class Solution
{
public:
    string largestOddNumber(string num)
    {
        int sum = 0;
        string ans = "";
        int a = 0;
        bool b = false;
        for (int i = num.size() - 1; i >= 0; i--)
        {
            if (num[i] % 2 == 1)
            {
                ans.push_back(num[i]);
                a = i;
                b = true;
                break;
            }
        }
        if (b)
        {
            for (int i = a - 1; i >= 0; i--)
            {
                ans.push_back(num[i]);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

// Optimal Soln

class Solution
{
public:
    string largestOddNumber(string num)
    {
        string ans = "";
        int index = -1;
        for (int i = num.length() - 1; i >= 0; i--)
        {
            if ((num[i]) % 2 != 0)
            { // when i will get a odd number i will store the index and break ;
                index = i;
                break;
            }
        }
        if (index != -1)
        { // if the index is -1 then the whole number is odd.
            for (int i = 0; i <= index; i++)
            { // if not -1 then run the loop till new index where we found out number
                ans += num[i];
            }
        }
        return ans; // and return the ans
    }
};