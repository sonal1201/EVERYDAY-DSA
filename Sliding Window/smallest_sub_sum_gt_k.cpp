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
        sum += arr[j];
        while (i <= j && sum >= k)
        {
            ans = min(j - i + 1, ans);
            sum -= arr[i];
            i++;
        }
        j++;
    }
    cout << ans;
}