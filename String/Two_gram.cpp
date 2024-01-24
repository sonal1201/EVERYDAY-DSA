// LC. Two-gram

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<string> st;

    for (int i = 0; i < s.size() - 1; i++)
    {
        st.push_back(s.substr(i, 2));
    }
    for (int i = 0; i < st.size(); i++)
    {
        cout << st[i] << " ";
    }

    int max = 0;
    int index = 0;
    for (int i = 0; i < st.size(); i++)
    {
        int cnt = 0;
        for (int j = 0; j < st.size(); j++)
        {
            if (st[i] == st[j])
            {
                cnt++;
            }
            if (cnt > max)
            {
                max = cnt;
                index = i;
            }
        }
    }
    cout << st[index];
}