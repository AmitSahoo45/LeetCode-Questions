#include <bits/stdc++.h>
using namespace std;

class Solution1
{
public:
    int findTheWinner(int n, int k, int total = 0)
    {
        for (int i = 1; i <= n; i++)
            total = (total + k) % i;
        return total + 1;
    }
};

class Solution2
{
public:
    int findTheWinner(int n, int k)
    {
        queue<int> q;
        for (int i = 1; i <= n; i++)
        {
            q.push(i);
        }
        while (q.size() != 1)
        {
            int x = k;
            while (x > 1)
            {
                int r = q.front();
                q.pop();
                q.push(r);
                x--;
            }
            q.pop();
        }
        return q.front();
    }
};

int main()
{

    return 0;
}