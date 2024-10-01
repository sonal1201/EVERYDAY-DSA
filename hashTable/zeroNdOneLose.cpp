// 2225. Find Players With Zero or One Losses

class Solution
{
public:
    vector<vector<int>> findWinners(vector<vector<int>> &matches)
    {
        int n = matches.size();
        unordered_map<int, int> list;

        // storing the player who lost matches
        for (int i = 0; i < matches.size(); i++)
        {
            int find = matches[i][1];
            list[find]++;
        }

        vector<int> notLost;
        vector<int> oneLost;

        for (int i = 0; i < matches.size(); i++)
        {
            int winner = matches[i][0];
            int loser = matches[i][1];

            // find winner player in unordered map - list;
            if (list.find(winner) == list.end())
            {
                notLost.push_back(winner);
                list[winner] = 2;
            }

            // find player who lost atleast one match;
            if (list[loser] == 1)
            {
                oneLost.push_back(loser);
            }
        }

        // sorting the list
        sort(notLost.begin(), notLost.end());
        sort(oneLost.begin(), oneLost.end());

        return {notLost, oneLost};
    }
};