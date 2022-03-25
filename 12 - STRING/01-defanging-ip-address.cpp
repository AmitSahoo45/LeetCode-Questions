#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string defangIPaddr(string a)
    {
        int n = a.size();
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '.')
            {
                a.insert(i - 1, "[");
                a.insert(i + 1, "]");
            }
        }
        return a;
    }
};

int main()
{
    Solution s;
    cout << s.defangIPaddr("1.1.1.1");
    return 0;
}