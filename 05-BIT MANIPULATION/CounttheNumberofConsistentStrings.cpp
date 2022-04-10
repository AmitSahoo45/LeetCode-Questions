#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pi;
#define all(v) v.begin(), v.end()
#define V(a, x, n, m) vector<vector<x>> a(n, vector<x>(m))

class Solution
{
public:
    int countConsistentStrings(string allowed, vector<string> &words)
    {
        int map[26] = {0}, ans = 0;
        for (auto &x : allowed)
            map[x - 'a']++;
        for (auto &word : words)
        {
            bool isConsistent = true;
            for (auto &ch : word)
            {
                if (map[ch - 'a'] == 0)
                {
                    isConsistent = false;
                    break;
                }
            }
            if (isConsistent)
                ans++;
        }
        return ans;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int test;
    cin >> test;
    while (test--)
    {
    }
    return 0;
}
