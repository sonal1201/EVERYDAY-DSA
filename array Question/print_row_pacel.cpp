#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << 1 << " ";
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= (n - i);
        ans /= (i);
        cout << ans << " ";
    }
    // cout << 1;
}