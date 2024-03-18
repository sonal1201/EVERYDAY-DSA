// GFG ->NEXT GREATER ELEMENT
class Solution
{
public:
    vector<long long> nextLargerElement(vector<long long> arr, int n)
    {
        // Your code here
        stack<long long> st;
        vector<long long> ans(n);
        for (int i = n - 1; i >= 0; i--)
        { // travrse from last
            while (st.empty() == false && arr[i] >= st.top())
            { // arr[i] >st.top() then there is no use to keep that in that stack pop that ele
                st.pop();
            }
            ans[i] = st.empty() ? -1 : st.top(); // is stack is empty push -1 else st.top();
            st.push(arr[i]);
        }
        return ans;
    }
};
