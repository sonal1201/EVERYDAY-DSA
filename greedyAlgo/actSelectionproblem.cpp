// Question -> Activity Selection
// Sort by the end
// we will do the act which will end first

#include <bits/stdc++.h>
// Time : O(NlogN)
using namespace std;
bool cmp(pair<int, int> p1, pair<int, int> p2)
{
    return p1.second < p2.second;
}

int main()
{
    int n;
    cin >> n;
    vector<int> start(n);
    vector<int> end(n);
    for (int i = 0; i < n; i++)
    {
        cin >> start[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> end[i];
    }
    vector<pair<int, int>> act(n);

    for (int i = 0; i < n; i++)
    {
        act[i] = {start[i], end[i]};
    }

    sort(act.begin(), act.end(), cmp);

    int lastend = act[0].second;
    int maxiAct = 1;
    for (int i = 0; i < n; i++)
    {
        int firstact = act[i].first;
        if (firstact > lastend)
        {
            maxiAct += 1;
            lastend = act[i].second;
        }
    }
    cout << maxiAct;
}