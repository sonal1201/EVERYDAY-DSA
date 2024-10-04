// 2491. Divide Players Into Teams of Equal Skill

class Solution
{
public:
    long long dividePlayers(vector<int> &skill)
    {
        int n = skill.size();
        vector<int> vec(1001, 0);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += skill[i];
            vec[skill[i]]++;
        }
        int totalTeam = n / 2;

        if (sum % totalTeam != 0)
        {
            return -1;
        }
        int teamSkill = sum / totalTeam;
        // storing ele freq..
        long long chem = 0;
        for (auto it : skill)
        {
            int remSkill = teamSkill - it;

            if (vec[remSkill] <= 0)
                return -1;

            chem += (long long)(it) * (long long)(remSkill);
            vec[remSkill] -= 1;
        }
        return chem / 2;
    }
};