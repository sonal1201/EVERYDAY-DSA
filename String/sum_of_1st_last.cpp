// converting the int to string then sub last index and first index..

#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    string str = to_string(x);
    int n = str.size();
    int sum = str[n - 1] - str[0];
    cout << sum;
}