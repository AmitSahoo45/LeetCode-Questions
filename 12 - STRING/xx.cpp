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

bool isMatch(string word, int i, string pattern, int j, auto &map)
{
    int n = word.size(), m = pattern.size();
    if (n < m)
        return false;

    if (i == n && j == m)
        return true;
    
    if (i == n || j == m)
        return false;
    
    char curr = pattern[j];
    if (map.find(curr) != map.end())
    {
        string s = map[curr];
        int k = s.size();
        if (word.substr(i, k).compare(s))
            return false;
        
        return isMatch(word, i + k, pattern, j + 1, map);
    }

    for (int k = 1; k <= n - i; k++)
    {
        map[curr] = word.substr(i, k);
        if (isMatch(word, i + k, pattern, j + 1, map))
            return true;
        
        map.erase(curr);
    }

    return false;
}

int main()
{
    string word = "codesleepcode";
    string pattern = "XYX";
    unordered_map<char, string> mapping;
    if (isMatch(word, 0, pattern, 0, mapping))
        for (auto entry : mapping)
            cout << entry.first << ": " << entry.second << endl;
    else
        cout << "Solution doesn't exist";
    

    return 0;
}