// Array Operations

/**
Given an integer array of size N. You are allowed to perform the below operation only if all the array elements are even.
Replace each element X of the array by X/2.
Print the maximum number of operations you can perform on an array.
**/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        int cnt = 0;

        while (num % 2 == 0)
        {
            num /= 2;
            cnt++;
        }
        mini = min(cnt, mini);
    }
    cout << mini;
    return 0;
}
