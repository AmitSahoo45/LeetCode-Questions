#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minSteps(string s, string t)
    {
        unordered_map<char, int> sm(26), st(26);
        for (auto c : s)
            sm[c]++;
        for (auto c : t)
            st[c]++;
        int ans = 0;

        for (int i = 0; i < 26; i++)
        {
            
        }

        return ans;
    }
};

int main()
{

    return 0;
}