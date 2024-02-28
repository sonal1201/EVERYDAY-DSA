// Minimum Absolute Difference in an Array->(HACKERRANK)
// TC->O(NLOGN)

int minimumAbsoluteDifference(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    int mini = INT_MAX;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int curr = abs(arr[i] - arr[i + 1]); // finding the mini abs of every pair
        mini = min(mini, curr);
    }
    return mini;
}