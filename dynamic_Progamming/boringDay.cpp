#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int j = 0, sum = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            if (sum < l)
                continue;
            if (sum <= r)
            {
                ans++;
                j = i + 1;
                sum = 0;
                continue;
            }

            while (j <= i && sum > r)
            {
                sum -= a[j];
                j++;
            }
            if (sum >= l)
            {
                ans++;
                j = i + 1;
                sum = 0;
            }
            cout << ans << endl;
        }
    }
}