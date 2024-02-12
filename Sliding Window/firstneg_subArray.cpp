#include <iostream>
#include <vector>
#include <deque>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    deque<int> dq;
    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
        {
            dq.push_back(i);
        }
    }

    if (dq.empty() == true)
    {
        cout << 0 << " ";
    }
    else
    {
        cout << arr[dq.front()] << " ";
    }
    for (int i = k; i < arr.size(); i++)
    {
        int add_index = i;
        int remove_index = i - k;
        if (dq.front() == remove_index)
        {
            dq.pop_front();
        }
        if (arr[add_index] < 0)
        {
            dq.push_back(add_index);
        }

        if (dq.empty() == true)
        {
            cout << 0 << " ";
        }
        else
        {
            cout << arr[dq.front()] << " ";
        }
    }
}