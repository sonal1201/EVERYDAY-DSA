// checking Palindrome using recursion.

#include <iostream>
#include <string>
using namespace std;
bool check(string s, int i, int j)
{
    if (s[i] != s[j])
    {
        return false;
    }
    check(s, ++i, --j);
    return true;
}
int main()
{
    string s;
    cin >> s;
    bool a = check(s, 0, s.size() - 1);
    if (a)
        cout << "Palindrome";
    else
        cout << "Not a palindrome";
}