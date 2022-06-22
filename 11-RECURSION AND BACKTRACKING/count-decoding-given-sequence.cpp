/*
Count decodings of a given sequence of digits:
Given a positive number, map its digits to the corresponding alphabet in the mapping table [(1, 'A'), (2, 'B'), … (26, 'Z')], and return the count of the total number of decodings possible. Assume that the input number can be split into valid single-digit or two-digit numbers that are present in the mapping table.
For example,
Input:  123
Output: 3
The possible decodings are [ABC, AW, LC]
Input:  1221
Output: 5
The possible decodings are [ABBA, ABU, AVA, LBA, LU]
*/

#include <bits/stdc++.h>
using namespace std;

int countDecodings(string str, int n)
{
    if (n == 0 || n == 1)
        return 1;

    if (str[0] == '0')
        return 0;

    int count = 0;

    if (str[n - 1] > '0')
        count = countDecodings(str, n - 1);

    if (str[n - 2] == '1' || (str[n - 2] == '2' && str[n - 1] < '7'))
        count += countDecodings(str, n - 2);

    return count;
}

int countWays(string str, int n)
{
    if (n == 0 || (n == 1 && str[0] == '0'))
        return 0;
    return countDecodings(str, n);
}

int main()
{
    string str;
    cin >> str;

    int n = str.length();
    int res = countWays(str, n);

    cout << res << endl;

    return 0;
}