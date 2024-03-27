// LC->Minimum Moves to Convert String
// TC-> O(N)

// A move is defined as selecting three consecutive characters of X
class Solution
{
public:
    int minimumMoves(string s)
    {
        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != 'O')
            {
                cnt++;
                i += 2;
            }
        }
        return cnt;
    }
};