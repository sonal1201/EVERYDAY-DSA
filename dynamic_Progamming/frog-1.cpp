// FROG-1 -- At coder

#include <bits/stdc++.h>
using namespace std;

int Helper(int i, vector<int> &stone, int dp[10004])
{
    if (i == 0)
        return 0;
    if (dp[i] != -1)
        return dp[i];
    int cost = INT_MAX;
    cost = min(cost, Helper(i - 1, stone, dp) + abs(stone[i] - stone[i - 1]));

    if (i > 1)
    {
        cost = min(cost, Helper(i - 2, stone, dp) + abs(stone[i] - stone[i - 2]));
    }

    return dp[i] = cost;
}

int main()
{
    int n;
    cin >> n;
    vector<int> stone(n);
    int dp[n];
    memset(dp, -1, sizeof(dp));

    for (int i = 0; i < n; i++)
    {
        cin >> stone[i];
    }

    cout << Helper(n - 1, stone, dp);
}