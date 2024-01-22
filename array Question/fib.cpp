// Fibonacci series

#include <iostream>
using namespace std;
void fib(int arr[])
{
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i <= 20; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
}
void print(int arr[])
{
    for (int i = 0; i <= 20; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[20];
    fib(arr);
    print(arr);
}