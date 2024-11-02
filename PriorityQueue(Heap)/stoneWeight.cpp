// 1046. Last Stone Weight

class Solution
{
public:
    int lastStoneWeight(vector<int> &stones)
    {
        priority_queue<int> pq;

        for (int i : stones)
        {
            pq.push(i);
            cout << pq.top();
        }

        while (pq.size() > 1)
        {
            int top = pq.top();
            pq.pop();
            int top1 = pq.top();
            pq.pop();

            pq.push(abs(top - top1));
        }
        return pq.top();
    }
};