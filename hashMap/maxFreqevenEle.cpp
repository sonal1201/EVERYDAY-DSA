// LC->Most Frequent Even Element
//  using unordered_map

class Solution
{
public:
    int mostFrequentEven(vector<int> &nums)
    {
        unordered_map<int, int> f;
        for (auto num : nums)
        {
            if (num % 2 == 1)
                continue;
            f[num]++;
        }
        int maxFreq = 0, ansEle = -1;
        for (auto p : f)
        {
            if (p.second < maxFreq)
            {
                continue;
            }
            if (p.second > maxFreq || p.first < ansEle)
            {
                maxFreq = p.second;
                ansEle = p.first;
            }
        }
        return ansEle;
    }
};