// Equilibrium Index

#include <bits/stdc++.h>
int findEquilibriumIndex(vector<int> &arr)
{
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }
    int total_sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum -= arr[i];
        if (sum == total_sum)
        {
            return i;
        }
        total_sum += arr[i];
    }
    return -1;
}