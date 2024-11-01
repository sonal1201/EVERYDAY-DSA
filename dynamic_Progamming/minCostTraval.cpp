// 983. Minimum Cost For Tickets

class Solution
{
public:
    int dp[366];
    int solve(vector<int> &days, vector<int> &cost, int i, int n)
    {
        if (i >= n)
            return -1;

        if (dp[i] != -1)
            return dp[i];

        // 1day pass
        int cost_1 = cost[0] + solve(days, cost, i + 1, n);

        // 7 days pass
        int j = i;
        int maxDay = days[i] + 7;
        while (j < n && maxDay > days[j])
            j++;

        int cost_7 = cost[1] + solve(days, cost, j, n);

        // 30 days pass
        j = i;
        maxDay = days[i] + 30;
        while (j < n && maxDay > days[j])
            j++;

        int cost_30 = cost[2] + solve(days, cost, j, n);

        return dp[i] = min({cost_1, cost_7, cost_30});
    }

    int mincostTickets(vector<int> &days, vector<int> &cost)
    {
        int n = days.size();
        memset(dp, -1, sizeof(dp));
        return solve(days, cost, 0, n) + 1;
    }
};