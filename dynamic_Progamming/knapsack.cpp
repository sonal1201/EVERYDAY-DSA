// AT CODER D

// TOP DOWN AP
//
#include <bits/stdc++.h>

using namespace std;

long long knapsackHelper(int i, vector<int> &wt, vector<int> &val, int remcap, long long dp[105][100005])
{
    if (remcap < 0)
        return INT_MIN;
    if (remcap == 0)
        return 0;
    if (i >= wt.size())
        return 0;
    if (dp[i][remcap] != -1)
        return dp[i][remcap];
    long long op1, op2;
    // pickit
    op1 = val[i] + knapsackHelper(i + 1, wt, val, remcap - wt[i], dp);

    // skipit
    op2 = knapsackHelper(i + 1, wt, val, remcap, dp);

    return dp[i][remcap] = max(op1, op2);
}

int main()
{
    int n, w;
    cin >> n >> w;

    vector<int> wt(n);
    vector<int> val(n);
    long long dp[105][100005];

    memset(dp, -1, sizeof(dp));

    for (int i = 0; i < n; i++)
    {
        cin >> wt[i] >> val[i];
    }

    cout << knapsackHelper(0, wt, val, w, dp);
}