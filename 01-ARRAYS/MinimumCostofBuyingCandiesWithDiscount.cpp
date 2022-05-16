#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pi;
#define all(v) v.begin(), v.end()
#define V(a, x, n, m) vector<vector<x>> a(n, vector<x>(m))

class Solution
{
public:
    int minimumCost(vector<int> &c)
    {
        sort(c.begin(), c.end(), greater<int>());
        for (auto i : c)
            cout << i << " ";
        int n = c.size() - 1, sum = 0;
        for (int i = n; i >= 0; i--)
            if ((i + 1) % 3 != 0)
                sum += c[i];
        return sum;
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
