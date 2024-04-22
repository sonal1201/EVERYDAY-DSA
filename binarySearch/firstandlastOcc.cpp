// Find First and Last Position of Element in Sorted Array

// USING LOWER AND UPPER BOUND
// TC-> O 2*(LOGN)
class Solution
{
public:
    // find first Occ
    int lower(vector<int> nums, int target)
    {
        int l = 0;
        int r = nums.size() - 1;
        int ans = r;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (nums[mid] >= target)
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
    // finding last occ
    int upper(vector<int> nums, int target)
    {
        int l = 0;
        int r = nums.size() - 1;
        int ans = nums.size();
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (nums[mid] > target)
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
    vector<int> searchRange(vector<int> &nums, int target)
    {
        if (nums.size() == 0)
            return {-1, -1};
        int lb = lower(nums, target);
        int ub = upper(nums, target);

        if (lb == nums.size() || nums[lb] != target)
            return {-1, -1};
        return {lb, ub - 1};
    }
};

// USING BINARY SEARCH

// TC-> O(LOGN)
int firstOcc(vector<int> arr, int n, int k)
{
    int l = 0;
    int h = arr.size() - 1;
    int first = -1;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (arr[mid] == k)
        {
            first = mid;
            h = mid - 1;
        }
        else if (arr[mid] > k)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return first;
}
int lastOcc(vector<int> arr, int n, int k)
{
    int l = 0;
    int h = arr.size() - 1;
    int last = -1;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (arr[mid] == k)
        {
            last = mid;
            l = mid + 1;
        }
        else if (arr[mid] > k)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    return last;
}

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    // Write your code here
    int first = firstO(arr, n, k);
    if (first == -1)
        return {-1, -1};
    int last = lastO(arr, n, k);

    return {first, last};
}