// LC->1004. Max Consecutive Ones III
/**
Given a binary array nums and an integer k,
return the maximum number of consecutive 1's in the array if you can flip at most k 0's.
**/

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    int k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int j = 0;
    int zero_cnt = 0;
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
            zero_cnt++;
        // Make the window valid again....
        for (; zero_cnt > k; j++)
        {
            if (nums[j] == 0)
            {
                zero_cnt--;
            }
        }
        ans = max(i - j + 1, ans);
    }
    cout << ans;
}