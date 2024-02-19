// Print the value 1 to N

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

// factorial using recusion

// #include <iostream>
// using namespace std;

// void fact(int i, int n)
// {
//     n *= i;

//     if (i == 5) //base case
//     {
//         cout << n;
//         return;
//     }
//     fact(i + 1, n);
// }

// int main()
// {
//     int i = 1;
//     int sum = 1;
//     fact(i, sum);
// }

// Print the value  N to 1

#include <iostream>
using namespace std;
void print(int n)
{
    cout << n << " ";
    if (n == 1)
    {
        return;
    }
    print(n - 1);
}
int main()
{
    int n;
    cin >> n;
    print(n);
}