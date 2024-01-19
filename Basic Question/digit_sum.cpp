// DIGIT SUM.....
//  1. find the sum of the given digit
//  2. then find the first 3 number whose digit sum is equal to given digin sum

#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int count = 0;
    int i = 1;
    while (count < n)
    {

        int digit = 0;
        int x = i;
        while (x > 0)
        {
            digit += x % 10;
            x /= 10;
        }
        if (digit == k)
        {
            count++;
            cout << i << endl;
        }
        i++;
    }
}