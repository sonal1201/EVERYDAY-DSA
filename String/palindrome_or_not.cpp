// Check Palindronme or not......

#include <iostream>
using namespace std;
int main()
{
    string str = "caac";
    string str1 = str;
    int n = str.size();
    bool flag = 1;
    for (int i = 0; i < n / 2; i++)
    {
        if (str[i] != str[n - i - 1])
        {
            flag = 0;
        }
    }
    if (flag == 1)
    {
        cout << "Its a Palindrome";
    }
    else
    {
        cout << "Its a Not Palindrome";
    }
}
