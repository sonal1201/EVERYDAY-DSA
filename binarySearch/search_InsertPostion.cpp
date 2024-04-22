// SEARCH INSERT POSTION...
// apply lowerBound code...

int searchInsert(vector<int> &arr, int m)
{
    // Write your code here.
    int l = 0;
    int r = arr.size() - 1;
    int ans = arr.size();
    while (l <= r)
    {
        int mid = (r + l) / 2;
        if (arr[mid] >= m)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}