// LC->605. Can Place Flowers

/*
We can just greedily try to put the flowers if the given
condition of adjacency holds true. It will work because we
will place the flower on ith position only when
i-1    i     i+1
0      0     0

*/

class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int cnt = 0;
        for (int i = 0; i < flowerbed.size(); i++)
        {
            if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) &&
                (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0))
            {
                flowerbed[i] = 1;
                cnt++;
            }
        }
        return cnt >= n;
    }
};