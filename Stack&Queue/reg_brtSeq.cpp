// CF-> Regular Bracket Sequence...

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    stack<int> st;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ')' && st.size() > 0)
        {
            st.pop();
            cnt += 2;
        }
        if (s[i] == '(')
        {
            st.push(s[i]);
        }
    }
    cout << cnt;
}