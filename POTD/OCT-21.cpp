// Split a String Into the Max Number of Unique Substrings

class Solution
{
public:
    void solve(int i, int &maxCnt, int currCnt, unordered_set<string> st,
               string s)
    {

        if (i >= s.size())
        {
            maxCnt = max(maxCnt, currCnt);
            return;
        }

        for (int j = i; j < s.size(); j++)
        {

            string str = s.substr(i, j - i + 1);
            if (st.find(str) == st.end())
            {
                st.insert(str);
                solve(j + 1, maxCnt, currCnt + 1, st, s);
                st.erase(str);
            }
        }
    }

    int maxUniqueSplit(string s)
    {
        unordered_set<string> st;
        int maxCnt = 0;
        int currCnt = 0;
        int i = 0;
        solve(i, maxCnt, currCnt, st, s);

        return maxCnt;
    }
};