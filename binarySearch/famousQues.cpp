#include <iostream>
using namespace std;
int func(int x)
{
    int ans = 0;
    while (x > 0)
    {
        ans += x;
        x /= 10;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int s = 0, e = n;
    int ans = 0;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        int f_mid = func(mid);
        if (f_mid == n)
        {
            ans = mid;
            break;
        }
        else if (f_mid > n)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    cout << ans;
}