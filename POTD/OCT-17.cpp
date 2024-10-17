// MAXIMUM SWAP

class Solution
{
public:
    int maximumSwap(int num)
    {
        string str = to_string(num);
        int n = str.length();
        vector<int> maxEle(10, -1);

        for (int i = 0; i < n; i++)
        {
            int currId = str[i] - '0';
            maxEle[currId] = i;
        }

        for (int i = 0; i < n; i++)
        {
            char currChar = str[i];
            int currEle = (currChar - '0');

            for (int digit = 9; digit > currEle; digit--)
            {
                if (maxEle[digit] > i)
                {
                    swap(str[i], str[maxEle[digit]]);
                    return stoi(str);
                }
            }
        }
        return num;
    }
};