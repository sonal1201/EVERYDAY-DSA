class Solution
{
public:
    int maxqueries(vector<int> &arr, vector<int> &queries)
    {
        int n = arr.size();
        int m = queries.size();
        vector<int> prefixmax(n);
        vector<int> suffixmax(n);
        // prefix max
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                prefixmax[i] = arr[i];
            }
            else
            {
                prefixmax[i] = max(prefixmax[i - 1], arr[i]);
            }
        }
        // suffix max
        for (int i = n - 1; i >= 0; i--)
        {
            if (i == n - 1)
            {
                suffixmax[i] = arr[i];
            }
            else
            {
                suffixmax[i] = max(suffixmax[i - 1], arr[i]);
            }
        }
        vector<int> ans(m.size() - 1);
        for (int id = 0; i < m.size(); i++)
        {

            if (id == 0)
            {
                ans[id] = suffixmax[1];
            }
            else if (id == n - 1)
            {
                ans[id] = prefixmax[n - 2];
            }
            else
            {
                ans[id] = max(prefixmax[i + 1], suffixmax[i - 1]);
            }
        }
    }
};
