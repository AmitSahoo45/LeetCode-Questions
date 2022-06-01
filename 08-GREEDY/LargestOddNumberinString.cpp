#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string largestOddNumber(string n)
    {
        for (int i = n.size() - 1; i >= 0; i--)
            if ((n[i] - '48') % 2 != 0)
                return n;
            else
                n.pop_back();
        return "";
    }
};

int main()
{

    return 0;
}