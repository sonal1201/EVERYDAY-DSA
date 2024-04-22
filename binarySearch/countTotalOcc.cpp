// Number of occurrence
// JUST RETURN RB-LB+1

int firstO(vector<int> arr, int n, int k)
{
    int l = 0;
    int h = arr.size() - 1;
    int firsty = -1;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (arr[mid] == k)
        {
            firsty = mid;
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
    return firsty;
}
int lastO(vector<int> arr, int n, int k)
{
    int l = 0;
    int h = arr.size() - 1;
    int lasty = -1;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (arr[mid] == k)
        {
            lasty = mid;
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

    return lasty;
}

int count(vector<int> &arr, int n, int k)
{
    // Write Your Code Here
    int lb = firstO(arr, n, k);
    if (lb == -1)
        return 0;
    int ub = lastO(arr, n, k);

    return ub - lb + 1;
}
