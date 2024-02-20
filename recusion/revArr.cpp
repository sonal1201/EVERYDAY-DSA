// REVERSING AN ARRAY USING RECURSION

#include <iostream>
using namespace std;
void rev(int arr[], int i, int j)
{
    if (i >= j)
    {
        return;
    }
    swap(arr[i], arr[j]);
    rev(arr, ++i, --j);
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    rev(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}