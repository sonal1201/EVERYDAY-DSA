//MATRIX MULTIPLICATION//

#include <iostream>
using namespace std;
int main()
{
    int a[3][4] = {
        {4, 3, 2, 1},
        {1, 2, 3, 4},
        {7, 8, 9, 7}};
    int b[4][4] = {
        {2, 3, 4, 5},
        {7, 8, 9, 7},
        {1, 2, 3, 4},
        {4, 3, 2, 1}};
    int ans[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            int sum = 0;
            for (int k = 0; k < 4; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            ans[i][j] = sum;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}