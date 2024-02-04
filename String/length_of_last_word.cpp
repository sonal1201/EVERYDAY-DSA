// 58. Length of Last Word
/**
Given a string s consisting of words and spaces, return the length of the last word in the string.
A word is a maximal substring consisting of non-space characters only.
**/

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int cnt = 0;
        bool flag = false;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            // flag i m using !flase mease true which mean if we get a letter then flag will be true and !true=false
            // this condition will false everytime after getting letter or word
            if (s[i] == ' ' && !flag)
            {
                continue;
            }
            if (s[i] != ' ')
            { // when i m getting a letter then flag is true;
                cnt++;
                flag = true;
            }
            if (s[i] == ' ')
            { // here if after word there is a space then it will break from loop
                break;
            }
        }

        return cnt;
    }
};
