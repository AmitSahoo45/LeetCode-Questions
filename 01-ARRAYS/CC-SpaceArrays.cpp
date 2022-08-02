#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pi;
#define all(v) v.begin(), v.end()
#define V(a, x, n, m) vector<vector<x>> a(n, vector<x>(m))

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int a[n];
        int ans = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n);
        for (int i = 1; i <= n; i++)
        {
            if (i - a[i - 1] < 0)
            {
                cout << "Second\n";
                return 0;
            }
            ans += i - a[i - 1];
        }

        if (ans % 2 == 0)
            cout << "Second\n";
        else
            cout << "First\n";
    }
    return 0;
}
