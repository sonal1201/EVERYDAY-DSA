class Solution
{
public:
    int minSwaps(string s)
    {
        stack<char> st;
        for (auto it : s)
        {
            if (!st.empty() && (st.top() == '[' && it == ']'))
            {
                st.pop();
                continue;
            }
            else
            {
                st.push(it);
            }
        }
        int unBal = st.size() / 2;
        int mini = (unBal + 1) / 2;

        return mini;
    }