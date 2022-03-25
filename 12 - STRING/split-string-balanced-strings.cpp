#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}

class Solution
{
public:
    int balancedStringSplit(string s)
    {
        int l = 0, r = 0, ctr = 0;
        for (auto it : s)
        {
            if (it == 'L')
                l++;
            else
                r++;
            if (l == r)
            {
                ctr++;
                l = r = 0;
            }
        }
        return ctr;
    }
};