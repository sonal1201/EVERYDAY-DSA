class Solution
{
public:
    vector<int> getSumAbsoluteDifferences(vector<int> &nums)
    {
        // vector<int> arr;
        // brute force//O(N^2)
        //  for(int i=0;i<nums.size();i++){
        //      int sum=0;
        //      int val = nums[i];
        //      for(int j=0;j<nums.size();j++){
        //          sum += abs(val-nums[j]);
        //      }
        //      arr.push_back(sum);
        //  }
        //  return arr;

        // optimal ap.. using prefix and suffix
        // TC->O(N);
        // SC->O(N);
        int n = nums.size();
        vector<int> prefix(n);
        vector<int> suffix(n);

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            prefix[i] = (i == 0) ? nums[i] : prefix[i - 1] + nums[i];
        }
        for (int i = n - 1; i >= 0; i--)
        {
            suffix[i] = (i == n - 1) ? nums[i] : suffix[i + 1] + nums[i];
        }

        for (int i = 0; i < n; i++)
        {
            int pre = (i == 0) ? 0 : prefix[i - 1];
            int suf = (i == n - 1) ? 0 : suffix[i + 1];

            int leftans = i * nums[i] - pre;
            int rightans = suf - (n - 1 - i) * nums[i];
            arr[i] = leftans + rightans;
        }

        return arr;
    }
};