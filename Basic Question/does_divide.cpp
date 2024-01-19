// Does it divide Hackerearth
// The sum of numbers from 1 to N, S=N*(N+1)/2 and Product P=1*2*3*..*N 
// For P to be divisible by S, All we have to do is to check whether N+1 is prime or not, 
// if it is prime then sum of the numbers will not divide product of the numbers
// and if it is not prime then sum will divide product.

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
