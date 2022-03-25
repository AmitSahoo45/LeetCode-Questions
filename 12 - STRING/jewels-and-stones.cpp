#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int numJewelsInStones(string j, string s)
    {
        int ctr = 0;
        unordered_set<char> m(j.begin(), j.end());
        for (auto i : s)
            if (m.count(i))
            {
                ctr++;
            }

        return ctr;
    }
};

int main()
{

    return 0;
}