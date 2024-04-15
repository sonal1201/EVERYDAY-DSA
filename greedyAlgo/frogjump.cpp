#include <iostream>
#include <vector>
using namespace std;
int frogjump(vector<int> stone, int n, int k)
{
    int curId = 0;
    int minJump = 0;
    while (curId < n)
    {
        int nextId = curId;
        int CurDist = 0;
        while (nextId + 1 <= n && CurDist + stone[nextId] <= k)
        {
            CurDist += stone[nextId];
            nextId += 1;
        }
        if (nextId == curId)
        {
            return -1;
        }

        curId = nextId;
        minJump += 1;
    }
    return minJump;
}
int main()
{
    int n;
    int k;
    cin >> n;
    cin >> k;
    vector<int> stone(n);
    for (int i = 0; i < n; i++)
    {
        cin >> stone[i];
    }
    int minjump = frogjump(stone, n, k);

    cout << minjump;
}