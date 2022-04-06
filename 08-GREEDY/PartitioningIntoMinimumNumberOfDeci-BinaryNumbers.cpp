#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minPartitions(string n, int m = 0)
    {
        for (auto i : n)
            m = max(i - '0', m);
        return m;
    }
};

int main()
{

    return 0;
}