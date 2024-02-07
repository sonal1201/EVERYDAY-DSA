// 268. Missing Number

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int N = nums.size();
        int sum = 0;
        for (int i = 0; i <= N; i++)
        {
            sum += i;
        }
        int sum1 = 0;
        for (int i = 0; i < N; i++)
        {
            sum1 += nums[i];
        }
        return sum - sum1;
    }
};