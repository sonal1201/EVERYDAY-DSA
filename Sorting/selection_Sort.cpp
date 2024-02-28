// SELECTION SORT.......
#include <iostream>
using namespace std;

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min_id = i;
        for (int j = i + 1; j < n; j++) // move j forward to find smaller number for arr[i];
        {
            if (arr[j] < arr[i]) // if found store its id in min_id
            {
                min_id = j;
            }
        }
        swap(arr[i], arr[min_id]); // swap i with min_id
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
    selection_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}