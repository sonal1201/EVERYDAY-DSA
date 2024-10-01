// 1497. Check If Array Pairs Are Divisible by k

class Solution
{
public:
    bool canArrange(vector<int> &arr, int k)
    {
        vector<int> mp(k, 0);
        // store rem in the vector
        for (int &num : arr)
        {
            int rem = (num % k + k) % k; // to handle negative value
            mp[rem]++;
        }

        if (mp[0] % 2 != 0)
            return false;
        // finding the pair
        for (int i = 1; i <= k / 2; i++)
        {
            int cnt = k - i;
            if (mp[i] != mp[cnt])
            {
                return false;
            }
        }
        return true;
    }
};