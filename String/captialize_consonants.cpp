// TAKE WORD(STRING) INPUT FROM USER AND CAPTIALIZE ALL THE CONSONANTS

// #include <iostream>
// using namespace std;
// int main()
// {
//     string str;
//     cin >> str;
//     for (int i = 0; i < str.size(); i++)
//     {
//         if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
//         {
//             continue;
//         }
//         else
//         {
//             str[i] = toupper(str[i]);
//         }
//     }
//     cout << str;
//     return 0;
// }

// TAKE WORD(STRING) INPUT FROM USER AND CAPTIALIZE ALL THE VOWELS -> A,E,I,O,U...

#include <iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {

            // str[i] = toupper(str[i]);
            str[i] = str[i] - 32; // without using function.
        }
    }
    cout << str;
    return 0;
}