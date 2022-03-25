#include <bits/stdc++.h>
using namespace std;

bool isPalin(string s)
{
    string t = s;
    reverse(t.begin(), t.end());
    return t == s ? true : false;
}

int isDigitSumPalindrome(int n)
{
    string s = to_string(n);
    reverse(s.begin(), s.end());
    return (n == stoi(s)) ? 1 : 0;
}

int main()
{
    string s = "2002";
    cout << isPalin(s);

    return 0;
}