#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int xorOperation(int n, int start)
    {
        int ctr = 0;
        for (int i = 0; i < n; i++)
            ctr = ctr ^ (start + 2 * i);
        return ctr;
    }
};

int main()
{

    return 0;
}