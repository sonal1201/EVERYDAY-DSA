// INSERTION SORT.....

#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n; ++i)
    {
        int curr_num = arr[i]; // comparing from previous element
        int j = i - 1;         // This because we will search in previous element
        while (j >= 0 && arr[j] > curr_num)
        {
            arr[j + 1] = arr[j]; // moving one place right side
            j--;
        }
        arr[j + 1] = curr_num;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertion_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}