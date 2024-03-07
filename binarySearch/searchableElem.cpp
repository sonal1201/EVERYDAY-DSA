// SEARCHABLE ELEMENT USING BINARY SEARCH....
// HERE THE ARRAY IS NOT SORTED
// WE ARE ONLY FINDING THE ELEMENT IT IS NOT COMPOLSARY TO FIND THAT ELEMENT
// IF THE ELEMENT FOUND THEN DO CNT++.

#include <iostream>
#include <vector>
using namespace std;
bool binarySearch(vector<int> &arr, int target)
{
    int s = 0;
    int e = arr.size() - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == target)
        {
            return true;
        }
        else if (arr[target] > target)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return false;
}

int searchableCount(vector<int> &arr, int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (binarySearch(arr, arr[i])) // WE ARE SENDING ARR AND ARR[I] AS TARGET
            ans++;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << searchableCount(arr, n);
}