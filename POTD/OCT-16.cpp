// 1405. Longest Happy String

class Solution
{
public:
    string longestDiverseString(int a, int b, int c)
    {
        // Priority queue to store the characters and their counts.
        priority_queue<pair<int, char>> pq;

        if (a > 0)
            pq.push({a, 'a'});
        if (b > 0)
            pq.push({b, 'b'});
        if (c > 0)
            pq.push({c, 'c'});

        string subStr = "";
        while (!pq.empty())
        {
            auto [count1, char1] = pq.top();
            pq.pop();

            if (subStr.size() >= 2 && subStr.back() == char1 &&
                subStr[subStr.size() - 2] == char1)
            {
                if (pq.empty())
                    break;

                auto [count2, char2] = pq.top();
                pq.pop();

                subStr += char2;
                count2--;

                if (count2 > 0)
                    pq.push({count2, char2});

                pq.push({count1, char1});
            }
            else
            {
                subStr += char1;
                count1--;

                if (count1 > 0)
                    pq.push({count1, char1});
            }
        }
        return subStr;
    }
};