// MAX VALUE

// TC-> O(N^2) BRUTE FORCE
// IF BOTH ARRAY IS SORTED THEN O(N)
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr1(n);
    vector<int> arr2(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    int maxi = INT_MIN;
    for (int i = 0; i < n - 2; i++)
    {
        int sum = 0;
        sum = arr1[i] - arr2[i];
        maxi = max(sum, maxi);
    }
    int maximum = (arr1[n - 1] + arr2[n - 1]);
    cout << maxi + maximum;
}