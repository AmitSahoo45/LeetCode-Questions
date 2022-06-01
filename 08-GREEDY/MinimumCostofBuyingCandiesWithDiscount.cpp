#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumCost(vector<int> &c)
    {
        sort(c.begin(), c.end(), greater<int>());
        for (auto i : c)
            cout << i << " ";
        int n = c.size() - 1, sum = 0;
        for (int i = 0; i <= n; i++)
            if ((i + 1) % 3 != 0)
                sum += c[i];
        return sum;
    }
};

int main()
{

    return 0;
}