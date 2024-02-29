#include <iostream>
#include <vector>
using namespace std;
void prefix(int arr[], int n)
{
    vector<int> prefix(n);
    prefix[0] = arr[0];
    cout << prefix[0] << " ";
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
        cout << prefix[i] << " ";
    }
}
void suffix(int arr[], int n)
{
    vector<int> suffix(n);
    suffix[n - 1] = arr[n - 1];
    cout << endl;
    for (int i = n - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] + arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << suffix[i] << " ";
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
    prefix(arr, n);
    suffix(arr, n);
}