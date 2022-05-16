#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pi;
#define all(v) v.begin(), v.end()
#define V(a, x, n, m) vector<vector<x>> a(n, vector<x>(m))

class Solution
{
public:
    int minOperations(vector<string> &logs)
    {
        int ctr = 0;
        for (int i = 0; i < logs.size(); i++)
        {
            if (logs[i] == "../")
            {
                if (ctr == 0)
                    continue;
                ctr--;
            }
            else if (logs[i] == "./")
                continue;
            else
                ctr++;
        }
        return ctr;
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
