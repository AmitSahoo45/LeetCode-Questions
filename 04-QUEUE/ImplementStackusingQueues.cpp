#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pi;
#define all(v) v.begin(), v.end()
#define V(a, x, n, m) vector<vector<x>> a(n, vector<x>(m))

class Stack
{
public:
    queue<int> que;
    void push(int x)
    {
        que.push(x);
        for (int i = 0; i < que.size() - 1; ++i)
        {
            que.push(que.front());
            que.pop();
        }
    }

    void pop()
    {
        que.pop();
    }

    int top()
    {
        return que.front();
    }

    bool empty()
    {
        return que.empty();
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
