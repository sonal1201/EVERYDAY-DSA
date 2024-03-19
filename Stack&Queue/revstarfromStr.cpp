2390. Removing Stars From a String

    class Solution
{
public:
    string removeStars(string s)
    {
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '*' && st.size() > 0)
            {
                st.pop();
            }
            else if (s[i] != '*')
            {
                st.push(s[i]);
            }
        }
        string str;
        while (st.size() > 0)
        {
            str += st.top();
            st.pop();
        }
        int i = 0;
        int j = str.size() - 1;
        while (i <= j)
        {
            swap(str[i], str[j]);
            i++;
            j--;
        }
        return str;
    }
};