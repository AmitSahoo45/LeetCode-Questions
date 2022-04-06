#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumSum(int num)
    {
        string s = to_string(num);
        sort(s.begin(), s.end());
        int n = ((s[0] - '0') * 10 + s[3] - '0') + ((s[1] - '0') * 10 + s[2] - '0');
        return n;
    }
};

int main()
{

    return 0;
}