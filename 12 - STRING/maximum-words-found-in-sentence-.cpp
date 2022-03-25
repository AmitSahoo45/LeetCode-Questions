#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int mostWordsFound(vector<string> &s, int ctr = 0)
    {
        for (auto i : s)
            ctr = max(ctr, (int)count(i.begin(), i.end(), ' '));
        return ctr + 1;
    }
};

int main()
{

    return 0;
}