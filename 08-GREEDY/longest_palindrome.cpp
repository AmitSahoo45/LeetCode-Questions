#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestPalindrome(string s)
    {
        vector<int> m(256, 0);
        for (auto &c : s)
        {
            cout << c - '\0' << endl;
            m[c - '\0']++;
        }
        int result = 0;
        for (auto &i : m)
            result += i % 2 ? (result % 2 ? i - 1 : i) : i;
        return result;
    }
};

class Solution1
{
public:
    int longestPalindrome(string s)
    {
        unordered_map<char, int> mp;
        bool f = false;
        int ans = 0;
        for (auto i : s)
            mp[i]++;

        for (auto i : mp)
        {
            if (i.second % 2 == 0)
                ans += i.second;
            else
            {
                ans += i.second - 1;
                f = true;
            }
        }
        if (f)
            ans++;
        return ans;
    }
};

int main()
{
    // Solution1 s;
    // int a = s.longestPalindrome("abccccdd");
    // cout << "a = " << a;
    Solution s1;
    int b = s1.longestPalindrome("abccccdd");
    cout << "b = " << b;
    return 0;
}
