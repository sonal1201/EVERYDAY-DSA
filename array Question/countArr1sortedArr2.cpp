/** GIVEN AN 2 SORTED ARRAY FIND FOR EACH ELEMENT FROM ARRAY1
THAT HOW MUCH ELEMENT IS SMALLER ARRAY2 **/

#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr1[n];
    int arr2[m];
    cout << "Give input for array1: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << "Give input for array2: ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    vector<int> ans(n);
    int i = 0, j = 0;
    while (i < n) // checking for each element
    {
        while (j < m && arr1[i] > arr2[j])
        {
            j++;
        }
        ans[i] = j;
        i++;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}