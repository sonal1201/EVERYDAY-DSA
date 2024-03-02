// FERRIS WHEEL

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x;
    cin >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n); // sort the arr.

    int i = 0;
    int j = n - 1;
    int cnt = 0;
    while (i <= j)
    {
        if (arr[i] + arr[j] <= x) // if the largest and smallest ele is less then x cnt++;
        {
            cnt++;
            i++;
            j--;
        }
        else
        {
            cnt++;
            j--;
        }
    }
    cout << cnt;
}