// Queue Question

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    queue<int> qu;
    qu.push(2);
    qu.push(3);
    qu.push(5);
    int i = 1;

    while (i <= n - 1)
    {
        int store_top = qu.front();
        qu.pop();
        qu.push(store_top * 10 + 2);
        qu.push(store_top * 10 + 3);
        qu.push(store_top * 10 + 5);
        i++;
    }
    cout << qu.front();
}