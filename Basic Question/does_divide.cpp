#include <iostream>
using namespace std;
bool isPrime(int num)
{
    if (num < 2)
        return false;
    for (int i = 2; i * i <= num; i++)

        if (num % i == 0)
            return false;

    return true;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        if (num != 1 && isPrime(num + 1))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}