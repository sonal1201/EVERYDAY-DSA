#include <iostream>
using namespace std;
int main()
{
    int student[6][5] = {
        {1, 2, 3, 4, 5},
        {11, 22, 33, 44, 55},
        {111, 222, 333, 444, 555},
        {12, 13, 14, 15, 16},
        {2, 1, 3, 56, 7},
        // {6, 5, 3, 9, 5}
    };
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << student[i][j] << " ";
        }
        cout << endl;
    }
}