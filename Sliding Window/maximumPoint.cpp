// LC-> 1423. Maximum Points You Can Obtain from Cards

class Solution
{
public:
    int maxScore(vector<int> &cardPoints, int k)
    {
        int lsum = 0, rsum = 0;
        int maxi = 0;
        for (int i = 0; i < k; i++)
        {
            lsum += cardPoints[i];
        }
        maxi = lsum;
        int rindex = cardPoints.size() - 1;
        for (int i = k - 1; i >= 0; i--)
        {
            lsum -= cardPoints[i];
            rsum += cardPoints[rindex];
            maxi = max(maxi, lsum + rsum);
            rindex -= 1;
        }
        return maxi;
    }
};