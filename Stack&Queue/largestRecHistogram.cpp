// 84. Largest Rectangle in Histogram

// TC->O(N)

#include <bits/stdc++.h>
#include <vector>
#include <stack>
using namespace std;

//FINDING NEXT SMALLER ELEMENT
vector<int> nextSmaller(vector<int> &arr)
{
    int n = arr.size();
    vector<int> next(n);
    stack<int> s;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!s.empty() && arr[s.top()] >= arr[i])
            s.pop();
        next[i] = s.empty() ? n : s.top();
        s.push(i);
    }
    return next;
}

//FINDING PREV SMALLER ELEMENT
vector<int> prevSmaller(vector<int> &arr)
{
    int n = arr.size();
    vector<int> prev(n);
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && arr[s.top()] >= arr[i])
            s.pop();

        prev[i] = s.empty() ? -1 : s.top();
        s.push(i);
    }
    return prev;
}

int largestRectangleArea(vector<int> &height)
{
    vector<int> prev = prevSmaller(height);
    vector<int> next = nextSmaller(height);
    int ans = INT_MIN;
    for (int i = 0; i < height.size(); i++)
    {
        ans = max(ans, (next[i] - prev[i] - 1) * height[i]);
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> height(n);
    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }
    cout << largestRectangleArea(height);
}
