#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxDistance(vector<int> &c)
    {
        int keeper = 0, fk = 0, l = c.size() - 1;
        for (int i = 1; i < c.size(); i++)
            if (c[i] != c[0])
                keeper = i;

        for (int i = c.size() - 1; i >= 0; i--)
            if (c[l] != c[i])
                fk = i;
        cout << fk << " ";

        return max(keeper, l - fk);
    }
};

int main()
{

    return 0;
}