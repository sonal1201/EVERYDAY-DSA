// 215. Kth Largest Element in an Array

class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {
        priority_queue<int> pq(begin(nums), end(nums));

        while (k--)
        {
            if (k == 0)
            {
                return pq.top();
            }
            pq.pop();
        }
        return -1;
    }
};