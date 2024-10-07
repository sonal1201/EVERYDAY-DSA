// 2696. Minimum String Length After Removing Substrings

// Using stack
class Solution
{
public:
    int minLength(string s)
    {
        stack<char> st;
        for (char it : s)
        {
            if (!st.empty() && ((st.top() == 'A' && it == 'B') || (st.top() == 'C' && it == 'D')))
            {
                st.pop();
                continue;
            }
            st.push(it);
        }
        return st.size();
    }
};