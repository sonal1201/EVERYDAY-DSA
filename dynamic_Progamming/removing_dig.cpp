// #include <iostream>
#include <bits/stdc++.h>
using namespace std;
int helper(int n, vector<int> &dp)
{
    if (n == 0)
        return 0;
    dp[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        string lt = to_string(i);

        for (char c : lt)
        {
            int dig = c - '0';
            if (dig != 0)
            {
                dp[i] = min(dp[i], dp[i - dig] + 1);
            }
        }
    }
    return dp[n];
}

int main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, INT_MAX);
    cout << helper(n, dp);
}
