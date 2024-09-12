#include <bits/stdc++.h>
using namespace std;
// #define max(a, b, c)
// #define max(a, max(b, c)) ;
int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int dp[4001];
    memset(dp, 0, sizeof(dp));

    if (n == 0)
        return 0;
    for (int i = n; i > 0; i--)
    {
        dp[i] = max(dp[i - a], dp[i - b], dp[i - c]) + 1;
    }

    cout << dp[n] << endl;
}