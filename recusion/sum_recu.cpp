// Sum to 1 to n;

#include <iostream>
using namespace std;
int summ(int n)
{
    // sum += n;
    if (n == 0)
    {
        // cout << sume;
        return 0;
    }
    return n + summ(n - 1);
}

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    cout << summ(n);
}