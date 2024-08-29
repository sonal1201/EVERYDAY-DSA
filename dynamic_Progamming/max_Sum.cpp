// Maximum sum of non-adjacent elements

#include <bits/stdc++.h>

int sumHelper(int i, vector<int> &nums, vector<int> &dp)
{
    // BASE CASE
    if (i == 0)
        return nums[i];
    if (i < 0)
        return 0;

    if (dp[i] != -1)
        return dp[i];

    int pick = nums[i] + sumHelper(i - 2, nums, dp);
    int notpick = 0 + sumHelper(i - 1, nums, dp);

    return dp[i] = max(pick, notpick);
}

int maximumNonAdjacentSum(vector<int> &nums)
{
    // Write your code here.
    vector<int> dp(nums.size(), -1);
    return sumHelper(nums.size() - 1, nums, dp);
}