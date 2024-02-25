// CODECHEF -> The Deadly Sin

#include <bits/stdc++.h>
using namespace std;
int deadly(int m, int b)
{
    if (m == b)
        return m + b;
    else if (m > b)
        deadly(m - b, b);
    else if (m < b)
        deadly(m, b - m);
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int m, b;
        cin >> m >> b;
        cout << deadly(m, b) << endl;
    }
}
