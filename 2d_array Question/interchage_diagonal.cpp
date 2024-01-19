// Interchange the diagonal and print it
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16
//    |
//    |
//    V
// 4 2 3 1
// 5 7 6 8
// 9 11 10 12
// 16 14 15 13

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
        // arr[i][i];
        int j = 4 - i - 1; // give the j diagonal number...
        swap(arr[i][i], arr[i][j]);
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