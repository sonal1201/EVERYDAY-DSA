// GFG-> STOCK SPAN

class Solution
{
public:
    // Function to calculate the span of stockâ€™s price for all n days.
    vector<int> prevgreater(int price[], int n)
    {

        stack<int> st;
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            while (st.size() && price[st.top()] <= price[i])
            {
                st.pop();
            }
            ans[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int> calculateSpan(int price[], int n)
    {
        // Your code here
        vector<int> prev = prevgreater(price, n);
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            ans[i] = i - prev[i];
        }
        return ans;
    }
};