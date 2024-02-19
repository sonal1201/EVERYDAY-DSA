// #include <iostream>
// using namespace std;
// void print(int i)
// {
//     cout << i << endl;
//     if (i == 5)
//     {
//         return;
//     }
//     print(i + 1);
// }
// int main()
// {
//     int i = 1;
//     print(i);
// }

// factorial

#include <iostream>
using namespace std;

void fact(int i, int n)
{
    n *= i;

    if (i == 5)
    {
        cout << n;
        return;
    }
    fact(i + 1, n);
}

int main()
{
    int i = 1;
    int sum = 1;
    fact(i, sum);
}