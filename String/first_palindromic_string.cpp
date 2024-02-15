// Find First Palindromic String in the Array

#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(const string &s)
{
    int i = 0;
    int j = s.length() - 1;
    while (i <= j)
    {
        if (s[i++] != s[j--])
        {
            return false;
        }
    }
    return true;
}

string firstPalindrome(vector<string> &word)
{
    for (string s : word)
    {
        if (isPalindrome(s)) // Extracting one one string and checking int is palindrome or not
        {
            return s;
        }
    }
    return " ";
}

int main()
{
    int n;
    cin >> n;
    vector<string> word(n);
    for (int i = 0; i < n; i++)
    {
        cin >> word[i];
    }
    string ans = firstPalindrome(word);
    cout << ans;
}