// Smallest subarray whose SUM IS >=K

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0;
    int j = 0;
    int sum = 0;
    int ans = INT_MAX;
    while (j < n)
    {
        // adding j element till sum become>=k
        sum += arr[j];
        while (i <= j && sum >= k)
        {
            ans = min(j - i + 1, ans); // storing the length of of smallest subarray
            sum -= arr[i];             // sub i to find the smallest subarray size
            i++;
        }
        // if it is out of sagment do j++ to do valid sagment
        j++;
    }
    cout << ans;
}