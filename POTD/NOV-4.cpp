// 3163. String Compression III

class Solution
{
public:
    string compressedString(string s)
    {
        int count = 0;
        string comp = "";
        int i = 0;
        int j = 0;
        cout << s.size();
        while (j <= s.size())
        {
            if (count < 9 && s[i] == s[j])
            {
                count++;
                j++;
            }

            else if (s[i] != s[j] || count == 9 || j < s.size())
            {
                comp += (to_string(count));
                comp.push_back(s[i]);
                i = j;
                count = 0;
            }
        }
        return comp;
    }
};