// MINIMUM DIFFERENCE AMONG K

#include <bits/stdc++.h>
#include <stdio.h>
#include <math.h>
using namespace std;

class Solution
{
public:
    int minDiff(int arr[], int N, int K)
    {
        sort(arr, arr + N); // sorting the arr;
        int mini = INT_MAX;
        for (int i = 0; i < N - K + 1; i++)
        { // loop will run till n-k+1
            int curr = abs(arr[i] - arr[i + K]);
            mini = min(curr, mini); // finding the mini
        }
        return mini;
    }
};

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        Solution obj;
        cout << obj.minDiff(a, n, k) << endl;
    }
    return 0;
}
