// Longest Subarray Whose Sum <= K.
// varible size sliding window

#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0;
    int j = 0;
    int sum = 0;
    while (j < n)
    {
        sum += arr[j]; // adding till sum<=k
        while (i <= j && sum > k)
        {
            sum -= arr[i]; // here if sum is exceding k then do sum-i i++;
            i++;
        }
        if (sum < k)
        {
            sum = max(j - i + 1, sum); // finding max if sum<k
        }
        j++;
    }
    cout << sum;
}