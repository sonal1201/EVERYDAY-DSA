#include <bits/stdc++.h>
using namespace std;

// function to return sum of elements
// in an array of size n
int sum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int answer = sum(arr, n);
        cout << answer;
    }
    return 0;
}