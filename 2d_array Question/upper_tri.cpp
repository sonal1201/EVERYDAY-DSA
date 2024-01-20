// printing the lower trigaluar matrixx.........
//  1 2 3 4
//  0 6 7 8
//  0 0 11 12
//  0 0 0 16

#include <iostream>
using namespace std;
int main()
{
    int arr[4][4];
    int cnt = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            arr[i][j] = cnt;
            cnt++;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == j || i < j)
            {
            }
            else
            {
                arr[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// ANOTHER VARIATION
//  Q--> Check it is upper trianglar or Not;

#include <iostream>
using namespace std;
int main()
{
    int arr[4][4] = {{1, 2, 3, 4}, {0, 6, 7, 8}, {0, 0, 11, 12}, {0, 0, 0, 16}};
    bool flag = 1;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i > j)
            {
                if (arr[i][j] != 0)
                {
                    flag = 0;
                    break;
                }
            }
        }
    }
    if (flag)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}