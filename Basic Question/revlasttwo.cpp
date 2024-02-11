// ONLY rev last two digit
// 432 => 24
#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    if (num < 0)
    {
        cout << "No negative";
        return 0;
    }
    int rev = 0;
    while (num > 0)
    {
        int sum = 0;
        while (num > 0)
        {
            sum = num % 10;
            num /= 10;
            if ((num == 0 || (num > 10)))
            {
                rev = (rev * 10) + sum;
            }
        }
    }
    cout << rev;
    return 0;
}