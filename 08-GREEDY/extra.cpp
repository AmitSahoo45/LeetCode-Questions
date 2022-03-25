#include <bits/stdc++.h>
using namespace std;

class Solution1
{
public:
    int longestPalindrome(string s)
    {
        unordered_map<char, int> mp;
        bool f = false;
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
            mp[s[i]]++;

        for (auto it : mp)
            cout << it.first << " " << it.second << endl;

        for (int i = 0; i < mp.size(); i++)
        {
            if (mp[i] % 2 == 0)
                ans += mp[i];
            else
            {
                ans += mp[i] - 1;
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
    Solution1 s;
    int a = s.longestPalindrome("abccccdd");
    cout << "a = " << a;
    return 0;
}
