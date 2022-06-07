/*
Determine whether a string matches with a given pattern
Given a string and a pattern, determine whether a string matches with a given pattern. The solution should not use any regex.

For example,
Input:
string: codesleepcode
pattern: XYX
Output:
X: code
Y: sleep

Input:
string: codecodecode
pattern: XXX
Output:
X: code
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, p;
    cout << "Enter the string: ";
    cin >> s;
    cout << "Enter the pattern: ";
    cin >> p;

    unordered_map<char, int> upPattern;
    for (auto it : p)
        upPattern[it]++;

    return 0;
}
