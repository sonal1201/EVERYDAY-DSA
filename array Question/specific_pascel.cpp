
// FIND the specfic element where row and col given by user
// USING THE FORMULA OF NCR = N!/R!(N-R)!

// Another approach

// use direct formula in for loop
// r=10,c=7
// r will cancel till 7 because all number will present in c! also
// res*=(n-i); 10*9*8
// res/=(i+1); 1*2*3  <- (r-c)!

#include <iostream>
using namespace std;

int fact(int a, int b)
{
    int ans = a - b;
    int count = 1;
    for (int i = 1; i <= ans; i++)
    {
        count *= i;
    }
    return count;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int row = 1;
    int col = 1;
    for (int i = 1; i <= n - 1; i++)
    {
        row *= i;
    }
    for (int i = 1; i <= m - 1; i++)
    {
        col *= i;
    }
    int ans = row / (col * fact(n, m));

    cout << ans;
}