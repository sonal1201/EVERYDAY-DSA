// FROG-2 -- At coder
// TC -> O(n*k)

#include <bits/stdc++.h>
using namespace std;

int Helper(int i, vector<int> &stone, int dp[10004], int k)
{
    if (i == 0)
        return 0;
    if (dp[i] != -1)
        return dp[i];
    int cost = INT_MAX;
    for (int j = 1; j <= k; j++)
    {
        if (i - j >= 0)
            cost = min(cost, Helper(i - j, stone, dp, k) + abs(stone[i] - stone[i - j]));
    }

    return dp[i] = cost;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> stone(n);
    int dp[n];
    memset(dp, -1, sizeof(dp));

    for (int i = 0; i < n; i++)
    {
        cin >> stone[i];
    }

    cout << Helper(n - 1, stone, dp, k);
}