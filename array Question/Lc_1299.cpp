// LC->Replace Elements with Greatest Element on Right Side

class Solution
{
public:
    vector<int> replaceElements(vector<int> &arr)
    {
        int maxi = -1;
        for (int i = arr.size() - 1; i >= 0; i--)
        {
            int newmax = max(maxi, arr[i]);
            arr[i] = maxi;
            maxi = newmax;
        }
        return arr;
    }
};