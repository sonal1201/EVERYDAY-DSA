//[1,2,3,4,5]
//[1,3,5,7,12]

#include <bits/stdc++.h>
vector<int> completeSum(vector<int> &a, int n)
{
    for (int i = 0; i < a.size(); i++)
    {
        a[i + 1] = a[i] + a[i + 1];
    }
    return a;
}
