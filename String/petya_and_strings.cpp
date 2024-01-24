// CF-> Petya and Strings

#include <iostream>
using namespace std;
int main()
{
    string str1;
    cin >> str1;
    string str2;
    cin >> str2;
    int sum1 = 0;
    int sum2 = 0;
    bool flag = 0;
    for (int i = 0; i < str1.size(); i++)
    {
        sum1 = sum1 + tolower(str1[i]);
        sum2 = sum2 + tolower(str2[i]);
        if (sum1 > sum2)
        {
            cout << 1;
            break;
        }
        if (sum2 > sum1)
        {
            cout << -1;
            break;
        }
    }

    if (sum1 == sum2)
    {
        cout << 0;
    }
}