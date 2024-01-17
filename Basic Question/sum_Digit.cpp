// SUM OF DIGITS.
// 121 --> 4
// 1234 --> 10
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    while (n > 0)
    {
        int digi = n % 10;
        n /= 10;
        sum += digi;
    }
    cout << sum;
}
// ............................