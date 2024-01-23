// You are given three digits a, b, c. Two of them are equal, but the third one is different from the other two.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int a, b, c;
//         cin >> a >> b >> c;
//         if (a == b)
//         {
//             cout << c << endl;
//         }
//         if (b == c)
//         {
//             cout << a << endl;
//         }
//         if (a == c)
//         {
//             cout << b << endl;
//         }
//     }
// }

// Recently, Chef visited his doctor. The doctor advised Chef to drink at least 2000 ml of water each day.

// Chef drank XX ml of water today. Determine if Chef followed the doctor's advice or not.

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (x >= 2000)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}