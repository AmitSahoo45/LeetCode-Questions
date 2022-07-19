#include <bits/stdc++.h>
using namespace std;

class CustomStack
{
public:
    vector<int> stack, inc;
    int n;
    CustomStack(int maxSize)
    {
        n = maxSize;
    }

    void push(int x)
    {
        if (stack.size() == n)
            return;
        stack.push_back(x);
        inc.push_back(0);
    }

    int pop()
    {
        int i = stack.size() - 1;
        if (i < 0)
            return -1;
        if (i > 0)
            inc[i - 1] += inc[i];
        int res = stack[i] + inc[i];
        stack.pop_back();
        inc.pop_back();
        return res;
    }

    void increment(int k, int val)
    {
        int i = min(k, (int)stack.size()) - 1;
        if (i >= 0)
            inc[i] += val;
    }
};

int main()
{

    return 0;
}