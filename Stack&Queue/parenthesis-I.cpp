// PARENTHESIS-I

#include <iostream>
using namespace std;

bool vaildPara(string &s)
{
    int closing_cnt = 0;
    int opening_cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ')')
        {
            closing_cnt++;
        }
        else
        {
            opening_cnt++;
        }
        if (closing_cnt > opening_cnt)
        {
            return false;
        }
    }
    if (closing_cnt == opening_cnt)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string s;
    cin >> s;
    if (vaildPara(s))
    {
        cout << "Its valid";
    }
    else
    {
        cout << "Its not valid";
    }
}