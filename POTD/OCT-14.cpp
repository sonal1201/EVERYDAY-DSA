// 2530. Maximal Score After Applying K Operations

class Solution
{
public:
    long long maxKelements(vector<int> &nums, int k)
    {
        priority_queue<int> pq(begin(nums), end(nums));

        long long maxScore = 0;
        while (k--)
        {
            cout << pq.top();
            maxScore += pq.top();
            int topEle = ceil(pq.top() / 3.0);
            pq.pop();
            pq.push(topEle);
        }

        return maxScore;
    }
};