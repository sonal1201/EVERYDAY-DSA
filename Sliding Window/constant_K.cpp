// More Easy Ap... using while loop
class Solution
{
public:
    long maximumSumSubarray(int K, vector<int> &Arr, int N)
    {
        long sum = 0;
        // Finding the sum of first subarray......
        for (int i = 0; i < K; i++)
        { //[0, k-1]
            sum += Arr[i];
        }
        int r = K - 1;
        int l = 0;
        int maxSum = INT_MIN;
        while (r < n - 1)
        {
            sum -= Arr[l];
            l++;
            r++;
            sum += Arr[r];
            maxSum = max(sum, maxSum);
        }
        return maxSum;
    }
};