#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> val(n);
    vector<int> weight(n);
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }

    vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= x; j++)
        {
            int value = val[i - 1];
            int w = weight[i - 1];

            // pick
            int pick = (j >= w ? dp[i - 1][j - w] + value : 0);
            // skip
            int skip = dp[i - 1][j];

            dp[i][j] = max(skip, pick);
        }
    }
    cout << dp[n][x] << endl;
}