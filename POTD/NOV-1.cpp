// 1957. Delete Characters to Make Fancy String

class Solution
{
public:
    string makeFancyString(string s)
    {
        int n = s.size();
        if (n < 3)
            return s;
        string str = "";
        str += s[0];
        int count = 1;
        int j = 0;
        for (int i = 1; i < n; i++)
        {

            if (str[j] == s[i])
            {
                str += s[i];
                count++;
            }
            else
            {
                str += s[i];
                count = 1;
            }
            if (count == 3)
            {
                str.pop_back();
                count = 2;
            }
            else
            {
                j++;
            }
        }

        return str;
    }
};